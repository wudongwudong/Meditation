using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spider : MonoBehaviour
{
    public float speed = 0.1f;
    public Transform target, cameraTransform;
    public GameObject Focal;
    public GameObject SpiderPrefab;
    public GameObject[] bullets;
    public GameObject[] spiders;
    // Start is called before the first frame update
    void Start()
    {
        cameraTransform = Camera.main.transform;
        Focal = GameObject.FindGameObjectWithTag("Focal");
        target = Focal.transform;

    }

    // Update is called once per frame
    void Update()
    {
        // Calculate the target position below the camera
        Vector3 targetPosition = cameraTransform.position - cameraTransform.up * 0.6f;


        // Move our position a step closer to the target.
        var step = speed * Time.deltaTime; // calculate distance to move
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, step);

        // Calculate the rotation towards the camera
        Vector3 lookAtPos = targetPosition - transform.position;
        lookAtPos.y = 0; // Optional: Keep the object upright (remove this line if not needed)
        Quaternion targetRotation = Quaternion.LookRotation(lookAtPos);

        // Gradually rotate towards the target rotation
        transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRotation, step*10);

        if (Input.GetKeyDown(KeyCode.Q))
            Launch();

    }

    public void Launch()
    {
        Instantiate(SpiderPrefab, new Vector3(0,0,0), Quaternion.identity);

    }

    public void End()
    {
        bullets = GameObject.FindGameObjectsWithTag("bullet");
        spiders = GameObject.FindGameObjectsWithTag("spider");

        foreach (GameObject bullet in bullets)
        {
            Destroy(bullet);
        }

        foreach (GameObject spider in spiders)
        {
            Destroy(spider);
        }

    }
}
