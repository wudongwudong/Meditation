using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootOrb : MonoBehaviour
{
    public GameObject explosion;
    public GameObject scriptAGameObject;
    private SceneController sceneController;
    // Start is called before the first frame update
    void Start()
    {

        sceneController = scriptAGameObject.GetComponent<SceneController>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("dummy")) // 
        {
            GameObject Explosion = Instantiate(explosion, collision.transform.position, collision.transform.rotation);
            Debug.Log("Collision Detected!");
            // Perform actions or handle collision as needed
            sceneController.DummyDied();
            Destroy(collision.transform.gameObject);
            Destroy(gameObject);

        }

        if (collision.gameObject.CompareTag("mainSlime")) // 
        {
            GameObject Explosion = Instantiate(explosion, collision.transform.position, collision.transform.rotation);
            Debug.Log("Kill!");
            collision.transform.GetComponent<EnemyAi>().Damagehit();
            sceneController.SlimeDied();
            // Perform actions or handle collision as needed
            gameObject.SetActive(false);
            Destroy(collision.transform.gameObject);
            Destroy(gameObject);
        }

    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("dummy"))
        {
            GameObject Explosion = Instantiate(explosion, other.transform.position, other.transform.rotation);
            Debug.Log("Trigger Enter Detected!");
            sceneController.DummyDied();
            // Perform actions or handle trigger enter event as needed
            Destroy(other.transform.gameObject);
            Destroy(gameObject);

        }

        if (other.gameObject.CompareTag("mainSlime")) // 
        {
            GameObject Explosion = Instantiate(explosion, other.transform.position, other.transform.rotation);
            Debug.Log("Kill!");
            other.GetComponent<EnemyAi>().Damagehit();
            sceneController.SlimeDied();
            // Perform actions or handle collision as needed
            Destroy(other.transform.gameObject);
            Destroy(gameObject);
        }
    }
}
