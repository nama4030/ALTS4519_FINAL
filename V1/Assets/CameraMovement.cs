using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    //public GameObject parent;
    //Quaternion currentRotation;
    // Start is called before the first frame update
    public AudioSource footstep;

    private Rigidbody rb;
    public GameObject child;
    private Vector3 movehorizontal;
    private Vector3 movevertical;
    private Vector3 moveDirection;
    private bool play = false;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        footstep.Play();
    }

    // Update is called once per frame
    void Update()
    {

        //if(Input.GetButtonDown("Fire1"))
        //{
        //    rb.AddForce(new Vector3(0, 7.5f, 0), ForceMode.Impulse);
        //}
        //Debug.Log(Input.GetAxis("Horizontal"));
        //Debug.Log(Input.GetAxis("Horizontal"));
        if (Input.GetAxis("Horizontal") != 0)
        {
            //footstep.Play();
            //Debug.Log(Input.GetAxis("Horizontal"));
            // Move the attached parent based on the right vector of this object multiplied by the horizontal axis value
            //parent.transform.position += (transform.right) * Input.GetAxis("Horizontal") *0.1f;
            transform.position += Input.GetAxis("Horizontal") * child.transform.right * 0.1f;
            //footstep.enabled = true;
            //play = true;
            //footstep.loop = true;
            //footstep.Play();
            footstep.UnPause();
            //rb.velocity = movehorizontal * Time.fixedDeltaTime * 100;
            //transform.position = child.transform.position + (transform.right) * Input.GetAxis("Horizontal") * 0.1f;
        }
        else
        {
            footstep.Pause();
        }
        if (Input.GetAxis("Vertical") != 0)
        {
            //footstep.Play();
            // Move the attached parent based on the right vector of this object multiplied by the horizontal axis value
            //parent.transform.position += (transform.forward) * Input.GetAxis("Vertical") * 0.1f;
            transform.position += Input.GetAxis("Vertical") * child.transform.forward * 0.1f;
            //footstep.enabled = true;
            //footstep.loop = true;
            //play = true;
            //footstep.Play();
            footstep.UnPause();
            //rb.velocity = movevertical * Time.fixedDeltaTime * 100;
            //transform.position = child.transform.position + (transform.forward) * Input.GetAxis("Vertical") * 0.1f;

        }
        else
        {
            footstep.Pause();
        }

        if (Input.GetButtonDown("Fire2"))
        {
            rb.useGravity = false;
        }
        if (Input.GetButtonDown("Fire3"))
        {
            rb.useGravity = true;
        }
        //if (play == true)
        //{
        //    //footstep.loop = true;
        //    footstep.Play();
        //}
        //else
        //{
        //    //footstep.loop = false;
        //}

        //moveDirection = (movehorizontal * transform.right + movevertical * transform.forward) ;
        //rb.velocity = moveDirection * Time.fixedDeltaTime * 100;
        //currentRotation.eulerAngles = transform.eulerAngles;
        //parent.transform.rotation = Quaternion.LookRotation(transform.forward, transform.up);
        //parent.transform.eulerAngles = new Vector3(parent.transform.eulerAngles.x, transform.eulerAngles.y, parent.transform.eulerAngles.z);
        //parent.transform.rotation = Quaternion.LookRotation(-Camera.main.transform.forward, Camera.main.transform.up);
    }
}
//rb.velocity = moveDirection* walkSpeed * Time.fixedDeltaTime * 100;


//public class CameraTransformCorrection : MonoBehaviour
//{
//    public GameObject mainCamera;
//    public GameObject cameraProxy;
//    public float lerpSpeed; // speed at which to interpolate between the proxy and main camera
//    public Vector3 joystick = new Vector3();

// Start is called before the first frame update
//void Start()
//{

//}

//// Update is called once per frame
//void Update()
//{
//    if (Input.GetAxis("Horizontal") != 0)
//    {
//        Debug.Log(Input.GetAxis("Horizontal"));
//        // Move the attached parent based on the right vector of this object multiplied by the horizontal axis value
//        //parent.transform.position += (transform.right) * Input.GetAxis("Horizontal");
//        joystick -= (transform.right) * Input.GetAxis("Horizontal");
//    }
//    else if (Input.GetAxis("Vertical") != 0)
//    {
//        // Move the attached parent based on the right vector of this object multiplied by the horizontal axis value
//        //parent.transform.position += (transform.forward) * Input.GetAxis("Vertical");
//        joystick -= (transform.forward) * Input.GetAxis("Vertical");
//    }
//    // Calculate the difference in rotation between the proxy rotation and current main camera rotation
//    Quaternion correction = cameraProxy.transform.rotation * Quaternion.Inverse(mainCamera.transform.localRotation);
//    // Set the rotation value of this camera to be a portion of the offset, over time this will correct slowly
//    transform.rotation = Quaternion.Lerp(transform.rotation, correction, lerpSpeed);
//    // copy the transform position
//    transform.position = cameraProxy.transform.position + joystick;
//}
