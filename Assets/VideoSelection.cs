using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideoSelection : MonoBehaviour
{

    VideoPlayer m_videoPlayer;
    [SerializeField]
    Button[] m_button;
    [SerializeField]
    Savevideo savevideo;
    private void Awake()
    {
        m_videoPlayer = this.gameObject.GetComponent<VideoPlayer>();
        if(savevideo.Savedclip!=null)
        {
            m_videoPlayer.clip = savevideo.Savedclip;
        }
    }

    private void OnEnable()
    {
        if (savevideo.Savedclip != null)
        {
            AssignVideo(savevideo.Savedclip);
        }
    }
    public void AssignVideo(VideoClip videoClip) // The thumbnails button will call this function while passing video as paramter
    {
        if (m_videoPlayer == null) // being sure its not null
        {
            this.gameObject.TryGetComponent<VideoPlayer>(out m_videoPlayer);
            return;
        }
        else
        {
            savevideo.Savedclip = videoClip; //saving video in scriptable object to load in next play 
            m_button[0].gameObject.SetActive(true);
            m_button[1].gameObject.SetActive(false);
            m_videoPlayer.clip = videoClip;
            StartCoroutine(Processthumbnail()); // giving enough time to videoplayer so it can render first few frams as thumbnail on screen 
        }
    }

    IEnumerator Processthumbnail()
    {
        m_videoPlayer.Prepare();
        m_videoPlayer.Play();
        yield return new WaitForSeconds(0.4f);
        m_videoPlayer.Pause();
        m_videoPlayer.time = 0;
        yield break;
    }
    
    public void Forward()
    {
        if (m_videoPlayer == null)
        {
            this.gameObject.TryGetComponent<VideoPlayer>(out m_videoPlayer);
            return;
        }
        else
        {
            if (m_videoPlayer.clip.length > m_videoPlayer.time + 5) // checking a scenario in which if forwarding 5 seconds exceed the total video clip lenth 
            {
                m_videoPlayer.time += 5;
            }
            else
            {
                m_videoPlayer.time = m_videoPlayer.length;
            }
        }
    }

    public void Backward()
    {
        if (m_videoPlayer == null)
        {
            this.gameObject.TryGetComponent<VideoPlayer>(out m_videoPlayer);
            return;
        }
        else
        {
            if (0< m_videoPlayer.time - 5)// checking a scenario in which if backwarding 5 seconds goes towards negative, setting 0 if true
            {
                m_videoPlayer.time -= 5;
            }
            else
            {
                m_videoPlayer.time = 0;
            }
        }
    }

    public void Videoplay()
    {
        if(m_videoPlayer !=null&&m_videoPlayer.clip!=null)
        {
            m_videoPlayer.Play();
        }
        else
        {
            return;
        }
    }
    public void VideoPause()
    {
        if (m_videoPlayer != null && m_videoPlayer.clip != null)
        {
            m_videoPlayer.Pause();
        }
        else
        {
            return;
        }
    }

    public void Rewind()
    {
        if (m_videoPlayer != null && m_videoPlayer.clip != null)
        {
            m_videoPlayer.time = 0;
            m_videoPlayer.Prepare();
        }
        else
        {
            return;
        }
    }
}
