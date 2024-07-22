using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrbSpawn : MonoBehaviour
{
    public GameObject ImaginaryOrb, OrbHolder, WayPoint;
    // Start is called before the first frame update
    void Start()
    {
        SpawnOrb();
    }

    // Update is called once per frame
    void Update()
    {
        if(OrbHolder.transform.childCount < 1)
        {
            SpawnOrb();
        }
    }
    private void OnTriggerEnter(Collider collider)
    {
        if (collider.name.Contains("Orb"))
        {
            Debug.Log("SpawnReady");
        }
    }
    private void OnTriggerExit(Collider collider)
    {
        if (collider.name.Contains("Orb"))
        {
            Debug.Log("SpawnReady");
        }
    }
    void SpawnOrb()
    {
        Vector3 Point = WayPoint.transform.position;
        GameObject NewOrb = Instantiate(ImaginaryOrb, Point, Quaternion.identity);
        NewOrb.SetActive(true);
        NewOrb.transform.SetParent(OrbHolder.transform);
    }

}
