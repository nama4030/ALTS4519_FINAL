using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Respawn2 : MonoBehaviour
{
    public AudioSource death;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        //Debug.Log("hit");
        death.Play();
        other.transform.position = new Vector3(8.2f, 22.11f, 48.8f);
    }
}
