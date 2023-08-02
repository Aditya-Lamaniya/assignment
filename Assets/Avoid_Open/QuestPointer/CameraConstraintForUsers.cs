using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraConstraintForUsers : MonoBehaviour
{
    [SerializeField]
    GameObject ArrowParticles;
    [SerializeField]
    MeshRenderer renderer_left, renderer_right, renderer_Back;

    private void Update()
    {
        if(renderer_left.isVisible|| renderer_right.isVisible||renderer_Back.isVisible)
        {
            ArrowParticles.SetActive(true);
        }
        else
        {
            ArrowParticles.SetActive(false);
        }
    }
}
