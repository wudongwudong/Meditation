using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Assets.ProgressBars.Scripts;
using Unity.VisualScripting;
using UnityEngine.SceneManagement;
using HaptGlove;

public class SceneController : MonoBehaviour
{
    public GameObject SceneZero,SceneOne, SceneTwo, SceneThree,SceneRunePillar, SceneFour, SceneFive, SceneFiveVideo, SceneSix, GiantRocks;
    public GameObject PowerProgressBar, RightHand, LeftHand;
    public GameObject Man, Woman, ManBody, energyProgressbar, ManHead, ManHair, ManEye, ManMouth, WomanBody, WomanHead, WomanHair, WomanEye, WomanMouth;
    public GameObject[] SlimeToInstantiate;
    public GameObject[] SpawnPositions;
    public GameObject[] dummy, mainSlimes;
    public GuiProgressBar[] _progressBars;
    public Material Normal, Water, eye;
    public TextMesh Fountain,EnergyOrb;
    public TextMeshPro Countdown, SlimeDeathText;
    public AudioClip SceneOneIntroOne, SceneTwoIntroOne, SceneThreeIntroOne, SceneThreeIntroTwo, SceneFourIntroOne, SceneFiveIntroOne, SceneSixCongratulation, SlimeDeath, DummyDeath;
    private AudioSource ASSceneOneIntroOne, ASSceneTwoIntroOne, ASSceneThreeIntroOne, ASSceneThreeIntroTwo, ASSceneFourIntroOne, ASSceneFiveIntroOne, ASSceneSixCongratulation, ASSlimeDeath, ASDummyDeath;
    public bool LiarContacted;
    private bool FinishTalking, mandone, womandone;
    private float timetoinvoke, CountdownTimer, slimeDeathCounter;
    int chosen = -1, spawn_number = 0;

    public GameObject headset, sceneOneCircle;
    // Start is called before the first frame update
    void Start()
    {
        // Create an AudioSource component
        ASSceneOneIntroOne = gameObject.AddComponent<AudioSource>();

        ASSceneTwoIntroOne = gameObject.AddComponent<AudioSource>();

        ASSceneThreeIntroOne = gameObject.AddComponent<AudioSource>();
        ASSceneThreeIntroTwo = gameObject.AddComponent<AudioSource>();

        ASSceneFourIntroOne = gameObject.AddComponent<AudioSource>();

        ASSceneFiveIntroOne = gameObject.AddComponent<AudioSource>();

        ASSceneSixCongratulation = gameObject.AddComponent<AudioSource>();

        ASSlimeDeath = gameObject.AddComponent<AudioSource>();
        ASDummyDeath = gameObject.AddComponent<AudioSource>();
        // Assign the audio clip to the AudioSource
        ASSceneOneIntroOne.clip = SceneOneIntroOne;

        ASSceneTwoIntroOne.clip = SceneTwoIntroOne;

        ASSceneThreeIntroOne.clip = SceneThreeIntroOne;
        ASSceneThreeIntroTwo.clip = SceneThreeIntroTwo;

        ASSceneFourIntroOne.clip = SceneFourIntroOne;

        ASSceneFiveIntroOne.clip = SceneFiveIntroOne;

        ASSceneSixCongratulation.clip = SceneSixCongratulation;

        ASSlimeDeath.clip = SlimeDeath;
        ASDummyDeath.clip = DummyDeath;

        CountdownTimer = 60;
        slimeDeathCounter = 0;
        FinishTalking = true;
        LiarContacted = false;
        mandone = false;
        womandone = false;
        timetoinvoke = Random.Range(1, 5);

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.N))
        {
            NextScene();
            // Call your custom function or trigger your event here
            Debug.Log("N key is pressed!");
        }
        if (Input.GetKeyDown(KeyCode.M))
        {
            RestartScene();
            //RestartToSceneZero();
            // Call your custom function or trigger your event here
            Debug.Log("N key is pressed!");
        }

        if (SceneZero.activeInHierarchy)
        {
            ToSceneOne();
        }
        else if(SceneOne.activeInHierarchy)
        {
            ToSceneTwo();
        }
        else if(SceneTwo.activeInHierarchy)
        {
            ToSceneThree();

        }
        else if (SceneThree.activeInHierarchy)
        {
            SceneThreeMaterialControl();
            ToSceneFour();
        }
        else if (SceneFour.activeInHierarchy)
        {
            energyProgressbar.SetActive(true);
            ToSceneFive();
        }
        else if (SceneFive.activeInHierarchy)
        {
            if(ASSceneFiveIntroOne.isPlaying == false )
            {
                SceneFiveVideo.SetActive(false);
                CountdownTimer -= Time.deltaTime;
                Countdown.text = CountdownTimer.ToString("F0");
                ToEndScene();
                if (chosen < 0)
                {
                    chosen = Random.Range(0, SlimeToInstantiate.Length);
                    SpawnPositions[chosen].SetActive(true);
                }

                if (timetoinvoke < 0)
                {
                    if (spawn_number - slimeDeathCounter < 12)
                    {
                        Invoke("InstantiateSlime", 0);
                        SpawnPositions[chosen].SetActive(false);
                        timetoinvoke = Random.Range(1, 4);
                        spawn_number++;
                        //Debug.Log(spawn_number);
                    }

                    else
                        SpawnPositions[chosen].SetActive(false);
                }

                else
                {
                    timetoinvoke -= Time.deltaTime;
                    //Debug.Log(timetoinvoke);
                }
            }
            
            if(Countdown.text == "0" )
            {
                ToSceneSix();
                SlimeDeathText.text = slimeDeathCounter + " Slimes Defeated";
            }
        }
    }
    void ToSceneOne() // Not completed
    {
        Collider firstCollider = headset.GetComponent<Collider>();
        Collider secondCollider = sceneOneCircle.GetComponent<Collider>();

        if (headset == null) Debug.Log("player null");
        if (sceneOneCircle == null) Debug.Log("circle null");
        if (firstCollider == null) Debug.Log("player collider null");
        if (secondCollider == null) Debug.Log("circle collider null");
        if (firstCollider != null && secondCollider != null)
        {
            if (firstCollider.bounds.Intersects(secondCollider.bounds))
            {
                StopAllAudio();
                // Collision detected between objects with specific tags
                Debug.Log("Collision Detected!");
                // Perform actions or load scenes as needed
                SceneZero.SetActive(false);
                SceneOne.SetActive(true);
                ASSceneOneIntroOne.Play();
            }
        }

        else { Debug.Log("Null collider"); }
    }
    void ToSceneTwo()
    {
        if(Fountain.text == "100%")
        {
            StopAllAudio();
            ASSceneTwoIntroOne.Play();
            //SceneOne.SetActive(false);
            StartCoroutine(SceneTransitRescale(1f, SceneOne));
            SceneTwo.SetActive(true);
        }
    }
    void ToSceneThree()
    {
        if (EnergyOrb.text == "100")
        {
            StopAllAudio();
            ASSceneThreeIntroOne.Play();
            StartCoroutine(SceneTransitRescale(1, SceneTwo));
            SceneThree.SetActive(true);
        }
    }

    void ToSceneFour() //if select correct liar - move to target practice
    {
        if (LiarContacted == true) // not completed
        {
            StopAllAudio();
            ASSceneFourIntroOne.Play();
            //SceneThree.SetActive(false);
            StartCoroutine(SceneTransitRescale(1, SceneThree));
            GiantRocks.SetActive(true);
            SceneFour.SetActive(true);
            SceneRunePillar.SetActive(true);
        }
    }
    void ToSceneFive()
    {

        dummy = GameObject.FindGameObjectsWithTag("dummy");
        //Debug.Log(dummy.Length);
        if (dummy.Length == 0)
        {
            StopAllAudio();
            CountdownTimer = 60;
            Countdown.text = CountdownTimer.ToString();
            ASSceneFiveIntroOne.Play();
            //SceneFour.SetActive(false);
            StartCoroutine(SceneTransitRescale(1, SceneFour)); 
            GiantRocks.SetActive(false);
            SceneFive.SetActive(true);
            SceneFiveVideo.SetActive(true);
            SceneRunePillar.SetActive(true);
        }

    }
    void ToSceneSix()
    {
        StopAllAudio();
        ASSceneSixCongratulation.Play();
        //SceneFive.SetActive(false);
        StartCoroutine(SceneTransitRescale(1, SceneFive));
        SceneSix.SetActive(true);
        SceneRunePillar.SetActive(false);
        foreach (GameObject Slime in mainSlimes)
        {
            Destroy(Slime);
        }
    }

    IEnumerator SceneTransitRescale(float sec, GameObject gameObject)
    {
        gameObject.transform.localScale = Vector3.zero;
        yield return new WaitForSeconds(sec);
        gameObject.SetActive(false);
        gameObject.transform.localScale = new Vector3(1, 1, 1);
    }

    void StopAllAudio()
    {
        ASSceneOneIntroOne.Stop();
        ASSceneTwoIntroOne.Stop();
        ASSceneThreeIntroOne.Stop();
        ASSceneThreeIntroTwo.Stop();
        ASSceneFourIntroOne.Stop();
        ASSceneFiveIntroOne.Stop();
        ASSceneSixCongratulation.Stop();
    }
    void ToEndScene()
    {
        mainSlimes = GameObject.FindGameObjectsWithTag("mainSlime");
        foreach (GameObject mainSlime in mainSlimes)
        {
            ChangeStateTo(mainSlime, SlimeAnimationState.Walk);
        }

    }
    public void NextScene()
    {
        StopAllAudio();
        if (SceneZero.activeInHierarchy)
        {
            SceneZero.SetActive(false);
            SceneOne.SetActive(true);
            ASSceneOneIntroOne.Play();
        }
        else if (SceneOne.activeInHierarchy)
        {
            ASSceneTwoIntroOne.Play();
            StartCoroutine(SceneTransitRescale(1f, SceneOne));
            SceneTwo.SetActive(true);
        }
        else if (SceneTwo.activeInHierarchy)
        {
            ASSceneThreeIntroOne.Play();
            StartCoroutine(SceneTransitRescale(1f, SceneTwo));
            SceneThree.SetActive(true);
        }
        else if (SceneThree.activeInHierarchy)
        {
            SceneThreeMaterialControl();
            ASSceneFourIntroOne.Play();
            StartCoroutine(SceneTransitRescale(1f, SceneThree));
            GiantRocks.SetActive(true);
            SceneFour.SetActive(true);
            SceneRunePillar.SetActive(true);
        }
        else if (SceneFour.activeInHierarchy)
        {
            CountdownTimer = 60;
            Countdown.text = CountdownTimer.ToString();
            ASSceneFiveIntroOne.Play();
            SceneFour.SetActive(false);
            GiantRocks.SetActive(false);
            SceneFive.SetActive(true);
            SceneFiveVideo.SetActive(true);
            SceneRunePillar.SetActive(true);

            energyProgressbar.SetActive(true);
        }
        else if (SceneFive.activeInHierarchy)
        {
            SceneRunePillar.SetActive(false);
            ASSceneSixCongratulation.Play();
            SceneFive.SetActive(false);
            SceneSix.SetActive(true);
            foreach (GameObject Slime in mainSlimes)
            {
                Destroy(Slime);
            }
        }
    }
    public void RestartScene()
    {
        // Get the index of the currently active scene
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        
        // Reload the current scene
        SceneManager.LoadScene(currentSceneIndex);
        foreach (var progressBar in _progressBars)
        {

            progressBar.Value = 0f;
        }
    }
    public void ChangeStateTo(GameObject mainSlime, SlimeAnimationState state)
    {
        if (mainSlime == null) return;
        if (state == mainSlime.GetComponent<EnemyAi>().currentState) return;

        mainSlime.GetComponent<EnemyAi>().currentState = state;
    }

    void InstantiateSlime() 
    {
        GameObject randomPrefab = SlimeToInstantiate[chosen];
        Vector3 spawnPosition = SpawnPositions[chosen].transform.position;
        //Debug.Log("slime produced at" + chosen);
        GameObject newObj = Instantiate(randomPrefab, spawnPosition, Quaternion.identity);
        newObj.SetActive(true);
        SpawnPositions[chosen].SetActive(false);
        chosen = -1;
    }
    public void LiarTriggered()
    {
        LiarContacted = true;
    }
    public void TriggerInstructions(string Gender)
    {
        
        if (Gender == "Male")
        {
            Debug.Log("TriggerMan");
            mandone = true;
        }
        if (Gender == "Female")
        {
            Debug.Log("TriggerWoman");
            womandone = true;
        }
        if(womandone == true && mandone == true)
        {
            Debug.Log("TriggerInstructions");
            StartCoroutine(PlayInstructions());
        }
    }
    IEnumerator PlayInstructions()
    {
        Debug.Log("Played");
        yield return new WaitForSeconds(3);
        ASSceneThreeIntroTwo.Play();
    }
    public void SlimeDied()
    {
        ASSlimeDeath.Play();
        slimeDeathCounter++;
    }
    public void DummyDied()
    {
        ASDummyDeath.Play();

    }
    void SceneThreeMaterialControl()
    {
        // Need a recording of avatar talking and turn them transparent when they finish talking
        if (!ASSceneThreeIntroOne.isPlaying)
        {
            Man.GetComponent<Animator>().enabled = false;
            Woman.GetComponent<Animator>().enabled = false;

            ManBody.GetComponent<SkinnedMeshRenderer>().material = Water;
            ManHair.GetComponent<MeshRenderer>().material = Water;
            ManHead.GetComponent<MeshRenderer>().material = Water;
            ManMouth.GetComponent<MeshRenderer>().material = Water;
            ManEye.GetComponent<MeshRenderer>().material = eye;

            WomanBody.GetComponent<SkinnedMeshRenderer>().material = Water;
            WomanHair.GetComponent<MeshRenderer>().material = Water;
            WomanHead.GetComponent<MeshRenderer>().material = Water;
            WomanMouth.GetComponent<MeshRenderer>().material = Water;
            WomanEye.GetComponent<MeshRenderer>().material = eye;
        }
        else
        {
            Man.GetComponent<Animator>().enabled = true;
            Woman.GetComponent<Animator>().enabled = true;

            ManBody.GetComponent<SkinnedMeshRenderer>().material = Normal;
            ManHair.GetComponent<MeshRenderer>().material = Normal;
            ManHead.GetComponent<MeshRenderer>().material = Normal;
            ManMouth.GetComponent<MeshRenderer>().material = Normal;
            ManEye.GetComponent<MeshRenderer>().material = Normal;

            WomanBody.GetComponent<SkinnedMeshRenderer>().material = Normal;
            WomanHair.GetComponent<MeshRenderer>().material = Normal;
            WomanHead.GetComponent<MeshRenderer>().material = Normal;
            WomanMouth.GetComponent<MeshRenderer>().material = Normal;
            WomanEye.GetComponent<MeshRenderer>().material = Normal;
        }
    }


}
