// FUNCTION: BF2 0x5770f0
namespace dice {
namespace hfe {
namespace world {

class Camera {
public:
    char pad[0x2cc];
    int m_mode; // 0x2cc
    char pad2[0x434 - 0x2cc - 4];
    bool m_hasRecoil; // 0x434
    char pad3[3];
    float m_recoilX; // 0x438
    float m_recoilY; // 0x43c
    char pad4[0x450 - 0x43c - 4];
    int m_450; // 0x450

    void addRecoilImpulse(float x, float y);
};

void Camera::addRecoilImpulse(float x, float y) {
    if ((unsigned int)(m_mode - 1) <= 1) {
        m_hasRecoil = true;
        m_recoilX = x;
        m_recoilY = y;
        m_450 = 0;
    }
}

}
}
}
