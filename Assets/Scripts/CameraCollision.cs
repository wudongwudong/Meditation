using UnityEngine;
using UnityEngine.SceneManagement;

public class CameraCollision : MonoBehaviour
{
    public string targetSceneName = "YourSceneName"; // Change this to your target scene name
    public GameObject scene0, scene1;

    private bool hasEntered = false;

    private void Start()
    {
        // Find the main camera GameObject and attach this script to it
        GameObject mainCamera = Camera.main.gameObject;
        if (mainCamera != null)
        {
            mainCamera.AddComponent<CameraCollision>();
        }
        else
        {
            Debug.LogError("Main camera not found. Attach this script to your main camera manually.");
            enabled = false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("circle")) 
        {
            if (!hasEntered)
            {
                hasEntered = true;
                // Change the scene
                scene0.SetActive(false);
                scene1.SetActive(true);
            }
        }
    }
}
