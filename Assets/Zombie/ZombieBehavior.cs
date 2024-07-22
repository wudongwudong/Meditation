using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieBehavior : MonoBehaviour
{
    public float distanceToFollow = 8.0f; // Distance to start following
    public float distanceToRun = 5.0f; // Distance to start running
    public float distanceToAttack = 2.2f; // Distance to start attacking
    public float speed = 0.1f;
    public Animator animator;
    private bool isColliding;
    private Camera mainCamera;
    private Color originalBackgroundColor;
    private Transform cameraTransform;
    private bool isFollowing = false;
    private bool isRunning = false;
    private bool isAttacking = false;

    void Start()
    {
        isColliding = false;
        mainCamera = Camera.main;
        originalBackgroundColor = mainCamera.backgroundColor;
        cameraTransform = Camera.main.transform;

        if (animator == null)
        {
            animator = GetComponent<Animator>();
        }
    }

    void Update()
    {
        if (cameraTransform != null)
        {
            float distanceToCamera = Vector3.Distance(transform.position, cameraTransform.position);
            Debug.Log(distanceToCamera);

            // Calculate the target position below the camera
            Vector3 targetPosition = cameraTransform.position - cameraTransform.up * 1.5f;

            bool followState = distanceToCamera <= distanceToFollow && distanceToCamera > distanceToRun;
            bool runState = distanceToCamera <= distanceToRun && distanceToCamera > distanceToAttack;
            bool attackState = distanceToCamera <= distanceToAttack;

            if (distanceToCamera <= distanceToFollow && distanceToCamera > distanceToRun)
            { followState = true; runState = false; attackState = false; }
            if (distanceToCamera <= distanceToRun && distanceToCamera > distanceToAttack)
            { followState = false; runState = true; attackState = false; }
            if (distanceToCamera <= distanceToAttack) 
            { followState = false; runState = false; attackState = true; }
            Debug.Log(followState + "," + runState + "," + attackState);
            MoveTowards(targetPosition, speed);
            // Only update if there's a change in the states
            if (isFollowing != followState || isRunning != runState || isAttacking != attackState)
            {
                isFollowing = followState;
                isRunning = runState;
                isAttacking = attackState;
                Debug.Log("State changed!");
                // Set animator boolean values
                animator.SetBool("IsFollowing", isFollowing);
                animator.SetBool("IsRunning", isRunning);
                animator.SetBool("IsAttacking", isAttacking);
            }

            if (attackState)
            {
                isColliding = true;
                Debug.Log("Collided");
                StartCoroutine(FlashCamera());
            }
        }
    }

    // Function to move towards the target position
    void MoveTowards(Vector3 targetPosition, float step)
    {
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, step * Time.deltaTime);
    }


    private IEnumerator FlashCamera()
    {
        mainCamera.backgroundColor = Color.red;
        yield return new WaitForSeconds(0.5f);
        mainCamera.backgroundColor = originalBackgroundColor;
        isColliding = false;
    }
}

