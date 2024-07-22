using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtCamera : MonoBehaviour
{
    public Transform camera;

    void Update()
    {
        transform.rotation = Quaternion.LookRotation(transform.position - camera.position);
    }
}
