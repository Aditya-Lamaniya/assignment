using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class userpresence : MonoBehaviour
{
    private void Start()
    {
        InputDevices.deviceConnected += InputDevices_deviceConnected;  
    }

    private void InputDevices_deviceConnected(InputDevice obj)
    {
        Debug.Log("the user presence is detected");
        StartCoroutine(RecenterView(obj));
    }

    IEnumerator RecenterView(InputDevice device)
    {
        yield return new WaitForSeconds(2f);
        device.subsystem.TryRecenter();
    }
}
