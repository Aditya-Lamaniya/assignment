using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class CameraViewRotate : MonoBehaviour
{
    // this is small is script for camera movement so that user can see around interior room 
    [SerializeField]
    float m_HoriztonalRotation = 0,
          m_VerticalRotation=0,
          currentRotation;
    Vector3 m_initalAnchor=new Vector3(0,0,0);
    [SerializeField]
    TMP_Text fpstext;
    // Update is called once per frame

    private void Awake()
    {
        Application.targetFrameRate = 60;
    }
    public void SetIntialanchor(RectTransform rectTransform)
    {
        m_initalAnchor = rectTransform.anchoredPosition;
    }
    public void setintitialPOS(RectTransform rectTransform)
    {
        m_HoriztonalRotation = m_initalAnchor.x- rectTransform.anchoredPosition.x;
        m_VerticalRotation = m_initalAnchor.y - rectTransform.anchoredPosition.y;
    }
    private void Update()
    {
        fpstext.text = "FPS : "+(1 / Time.deltaTime).ToString();
    }
    void LateUpdate()
    {
        
        transform.Rotate(0, -m_HoriztonalRotation * Time.smoothDeltaTime , 0);
        float newRotation = currentRotation + m_VerticalRotation* Time.smoothDeltaTime;
        currentRotation = Mathf.Clamp(newRotation, -30, 30);
        transform.rotation = Quaternion.Euler(newRotation,transform.rotation.eulerAngles.y, 0);
    }
}
