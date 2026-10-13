// FUNCTION: BF2 0x6b2150
namespace dice { namespace anim {

void stopAllPlaying();

class AnimationSystem
{
public:
    void reset();
private:
    char m_pad0[0xc];
    int  m_c;
    int  m_10;
    int  m_14;
    char m_pad1[0x28];
    float m_40;
    float m_44;
    char m_pad2[0x18];
    void* m_60;
    char m_pad3[9];
    char m_71;
    char m_72;
    char m_73;
    char m_pad4[0x18];
    float m_8c;
    float m_90;
    char m_pad5[4];
    void* m_98;
};

void AnimationSystem::reset()
{
    stopAllPlaying();
    m_71 = 1;
    m_73 = 0;
    m_60 = 0;
    m_90 = 1.0f;
    m_72 = 0;
    m_98 = 0;
    m_8c = 0;
    m_40 = 0;
    m_44 = 0;
    m_14 = 0;
    m_c = 0;
    m_10 = 0;
}

} }
