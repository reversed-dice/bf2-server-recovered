// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5773f0
namespace dice { namespace hfe {

class ISystem {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual double v6();
};

extern ISystem* g_system;

namespace world {

extern int* g_explosionShakeTime;

class Camera {
public:
    void handleExplosion(float time);
private:
    char _pad0[0x28];
    void* m_28;
    char _pad1[0x398];
    float m_3c8;
    double m_3d0;
    char _pad2[0x68];
    int m_440;
    float m_444;
};

void Camera::handleExplosion(float time)
{
    m_440 = *g_explosionShakeTime;
    m_444 = time;
    if (*(float*)((char*)m_28 + 0x338) == 0.0f)
        return;
    if (time > m_3c8) {
        m_3c8 = time;
        m_3d0 = g_system->v6();
    }
}

} } }
