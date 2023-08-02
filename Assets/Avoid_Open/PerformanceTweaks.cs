using UnityEngine;
using UnityEngine.Android;

public class PerformanceTweaks : MonoBehaviour
{
    [Tooltip(" will increase Render Scale by multiply of (float)RenderScale")]
    public bool RenderScaleTweak = false;
    [Tooltip("On enabled , it will try to set frame to 90 fps")]
    public bool FPStweak = false;
    [SerializeField]
    [Range(1,2)]
    float RenderScale = 1.5f;

    private void Awake()
    {
        if (RenderScaleTweak)
        {
            UnityEngine.XR.XRSettings.eyeTextureResolutionScale = RenderScale;
        }
        if (FPStweak)
        {
            Application.targetFrameRate = 90;
        }
    }
}
