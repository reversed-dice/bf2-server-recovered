// BF2_FLAGS: -mtune=nocona
// FUNCTION: BF2 0x6f2580
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    void setxz(float axz, float ay) { x = axz; z = axz; y = ay; }
};

namespace world {

class SoldierResponsePhysics {
public:
    void reset();
private:
    char pad[0xb4];
    Vec3 m_b4;
    Vec3 m_c0;
    char pad2[12];
    Vec3 m_d8;
    Vec3 m_e4;
    int m_f0;
    char pad3[0x25];
    char m_119;
    char m_11a;
};

void SoldierResponsePhysics::reset()
{
    m_b4.set(0.0f, 0.0f, 0.0f);
    m_c0.set(0.0f, 0.0f, 0.0f);
    unsigned char b = m_11a;
    m_f0 = 0;
    m_11a = 0;
    m_119 = b;
    m_e4.setxz(0.0f, *(float*)(*(void**)0x10a4088));
    m_d8.set(0.0f, 0.0f, 0.0f);
}

} }
}
