// FUNCTION: BF2 0x577ef0
extern "C" float sinf(float);
namespace dice { namespace hfe { namespace world {

extern float* g_recoilSpeed;
extern float* g_recoilAmplitude;

class Camera {
public:
    void updateCameraRecoil(float dt);
private:
    char m_pad0[0x434];
    bool m_recoiling;
    float m_recoilRate;
    float m_recoilFrequency;
    char m_pad1[0x450 - 0x440];
    float m_recoilPhase;
    char m_pad2[0x460 - 0x454];
    float m_recoilOffset;
};

void Camera::updateCameraRecoil(float dt) {
    if (m_recoiling) {
        m_recoilPhase += dt * m_recoilRate * *g_recoilSpeed;
        if (m_recoilPhase > 1.0f) {
            m_recoiling = false;
            m_recoilPhase = 0.0f;
        }
        m_recoilOffset = m_recoilFrequency * *g_recoilAmplitude * sinf(m_recoilPhase * 6.28319f);
    } else {
        m_recoilPhase = 0.0f;
        m_recoilOffset = 0.0f;
    }
}

} } }
