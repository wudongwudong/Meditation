using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using HaptGlove;
using System;
using System.Linq;
using TMPro;
using HaptGlove;
using Assets.ProgressBars.Scripts;
public class Shoot : MonoBehaviour
{

    private Transform arCamera;
    private LineRenderer line;
    public GameObject projectile, rightpalm, WayPoint, OrbHolder, RightHand, LeftHand, miniexplosion;
    private GameObject orb;
    public float shootForce = 1, ArisMean, ReadyCount, ArisLowerDiff, ArisUpperDiff;
    private float timer, orbtimer;
    public BLEServicesManager bluetoothController;
    public bool notyetshoot, findraydirection, ReadyToShoot;
    public AudioClip ready;
    private AudioSource ASready;
    Vector3 rayDirection, orb_initialposition, orb_finalposition;
    Ray ray;
    private List<float> ArisArray;
    public GameObject Scene4, Scene5, Scene6;
    public GuiProgressBar[] _progressBars;
    public HaptGloveHandler haptGloveHandler;

    private float maxChargeSecond = 1.2f;
    private float readyChargeSecond = 0.3f;
    private float speedRatio = 10f;

    private int shootSmoothTotalFrames = 30;
    private Queue<Quaternion> directionQueue = new Queue<Quaternion>(); 


    private void Start()
    {
        ASready = gameObject.AddComponent<AudioSource>();
        // Assign the audio clip to the AudioSource
        ASready.clip = ready;
        line = GetComponent<LineRenderer>();
        bluetoothController = GetComponent<BLEServicesManager>();
        notyetshoot = true;
        findraydirection = false;
        timer = 0.5f;
        orbtimer = 0.5f;
        ReadyCount = 0;
        ArisArray = new List<float>();
    }

    void Update()
    {
        arCamera = rightpalm.transform;
        //rayDirection = Quaternion.Euler(45f, 0f, 0f) * arCamera.forward;

        ARISAdjustment(bluetoothController.sensorArray[0]);

        if (Scene4.activeInHierarchy || Scene5.activeInHierarchy)
        { line.enabled = true; }
        else line.enabled = false;

        rayDirection = Quaternion.AngleAxis(45f, arCamera.right) * arCamera.forward;
        //rayDirection = ShootDirectionSmoother(Quaternion.AngleAxis(45f, arCamera.right), shootSmoothTotalFrames) * arCamera.forward;    // smooth shoot direction
        ray = new Ray(arCamera.position, rayDirection);

        // Set the positions for the LineRenderer (start and end points of the ray)
        line.SetPosition(0, ray.origin);
        line.SetPosition(1, ray.origin + ray.direction); // Change 10f to adjust the length of the ray

        if (bluetoothController._connected) 
        {
            if (timer > 0)
            {
                timer -= Time.deltaTime;

                if (notyetshoot)
                {
                    if (Scene4.activeInHierarchy || Scene5.activeInHierarchy)
                    {
                        if (rightpalm.transform.childCount == 1)
                        {
                            orb = rightpalm.transform.GetChild(0).gameObject;
                            Debug.Log(orb.transform.position);
                            if (bluetoothController.sensorArray[0] < ArisMean - ArisLowerDiff*0.2f && ReadyToShoot )
                            {
                                ShootBullet();
                                DestroyBullet();
                                orb_initialposition = orb.transform.position;
                                ReadyToShoot = false;
   
                            }

                            else if (Input.GetKeyDown(KeyCode.P))
                            {
                                ShootBullet();
                                DestroyBullet();
                                orb = rightpalm.transform.GetChild(0).gameObject;
                                orb_initialposition = orb.transform.position;
                                findraydirection = true;
                                Debug.Log("shoot" + orb_initialposition);
                            }
                        }

                    }

                    
                }

            }

            else
            {
                bluetoothController.InitialData[0] = bluetoothController.sensorArray[0];

                timer = 0.5f;
                notyetshoot = true;

            }

            if (Scene6.activeInHierarchy)
            {
                if (rightpalm.transform.childCount == 1)
                {
                    DestroyBullet();
                    RemoveHapticsAfterShoot();
                }
            }

        }


        //if (findraydirection)
        //{
        //    if (orbtimer > 0)
        //    {
        //        orbtimer -= Time.deltaTime;
        //        Debug.Log(orbtimer);
        //    }

        //    else
        //    {
        //        orb = rightpalm.transform.GetChild(0).gameObject;
        //        orb_finalposition = orb.transform.position;
        //        orbtimer = 0.5f;

        //        rayDirection =  orb_finalposition - orb_initialposition;
        //        Debug.Log(orb_initialposition + "," + orb_finalposition);
        //        rayDirection = rayDirection.normalized;
        //        // Create a ray from the hand position and direction


        //        ShootBullet();
        //        DestroyBullet();
        //        findraydirection = false;
        //    }
        //}


    }


    private Quaternion ShootDirectionSmoother(Quaternion currentDirection, int frames)
    {
        if (directionQueue.Count == frames)
        {
            directionQueue.Dequeue();
        }
        
        directionQueue.Enqueue(currentDirection);

        Quaternion averageRotation = Quaternion.identity;
        foreach (var direction in directionQueue)
        {
            averageRotation *= Quaternion.Lerp(Quaternion.identity, direction,1f/directionQueue.Count);
        }


        return averageRotation;
    }

    public void ARISAdjustment(float value)
    {

        if(ArisArray.Count < 500)
        {
            ArisArray.Add(value);
        }
        else
        {
            ArisArray.RemoveAt(0);
            ArisArray.Add(value);
        }
        ArisLowerDiff = value - ArisArray.Min();
        ArisUpperDiff = ArisArray.Max() - value;
        ArisMean = ArisArray.Average() + ArisUpperDiff * 0.2f;
        ShootReadyCheck(value);
    }


    public void ShootReadyCheck(float value)
    {
        if (value > ArisMean && rightpalm.transform.childCount == 1)
        {
            if (ReadyCount <= maxChargeSecond)
            {
                ReadyCount += Time.deltaTime;
            }

            foreach (var progressBar in _progressBars)
            {

                progressBar.Value = ReadyCount / maxChargeSecond;
            }

        }
        if (ReadyCount >= readyChargeSecond && ReadyToShoot == false)
        {
            ReadyToShoot = true;
            ASready.Play();
        }

        //if (value > ArisMean && rightpalm.transform.childCount == 1)
        //{
        //    if(ReadyCount <= 200)
        //    {
        //        ReadyCount++;
        //    }

        //    foreach (var progressBar in _progressBars)
        //    {

        //        progressBar.Value = ReadyCount/200;
        //    }

        //}
        //if(ReadyCount >= 30 && ReadyToShoot == false)
        //{
        //    ReadyToShoot = true;
        //    ASready.Play();
        //}
    }

    public void ShootBullet()
    {

        GameObject bullet = Instantiate(projectile, ray.origin, arCamera.rotation);

        GameObject ExplosionHand = Instantiate(miniexplosion, ray.origin, arCamera.rotation);
        bullet.SetActive(true);

        //bullet.transform.SetParent(FreeOrb.transform);
        bullet.GetComponent<Rigidbody>().velocity = rayDirection * ReadyCount * speedRatio;
        //bullet.GetComponent<Rigidbody>().AddForce(punchDirection * (shootForce + bluetoothController.InitialData[0] - bluetoothController.sensorArray[0]));
        notyetshoot = false;

        //Haptics
        RemoveHapticsAfterShoot();

        ReadyCount = 0;
        foreach (var progressBar in _progressBars)
        {

            progressBar.Value = 0;
        }
    }
    public void DestroyBullet()
    {
        foreach (Transform child in rightpalm.transform)
        {
            // Destroy each child GameObject
            Destroy(child.gameObject);
        }

    }

    private void RemoveHapticsAfterShoot()
    {
        string[] fingers = new string[5] { "Thumb", "Index", "Middle", "Ring", "Pinky" };
        byte[][] clutchStates = haptGloveHandler.haptics.SetClutchState(fingers, false);
        byte[] btData = haptGloveHandler.haptics.ApplyHaptics(clutchStates, 40, false);
        haptGloveHandler.BTSend(btData);

        byte[] clutchState = haptGloveHandler.haptics.SetClutchState("Palm", false);
        btData = haptGloveHandler.haptics.ApplyHaptics(5, clutchState, 10, false);
        haptGloveHandler.BTSend(btData);
    }
}
