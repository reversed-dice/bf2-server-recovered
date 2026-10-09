// FUNCTION: BF2 0x422f10
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad8[0x8];
};

class CreateObjectEvent : public GameEvent {
public:
    CreateObjectEvent(unsigned int a, unsigned short b, unsigned int c, int d);
    virtual ~CreateObjectEvent();

    unsigned int m_a;      // +0x10
    unsigned short m_b;    // +0x14
    Vec3 m_pos;            // +0x18
    Vec3 m_rot;            // +0x24
    int m_d;               // +0x30
    unsigned int m_c;      // +0x34
};

CreateObjectEvent::CreateObjectEvent(unsigned int a, unsigned short b, unsigned int c, int d)
{
    m_a = a;
    m_b = b;
    int zero = 0;
    float* p1 = (float*)&m_pos;
    p1[0] = *(float*)&zero;
    p1[1] = *(float*)&zero;
    p1[2] = *(float*)&zero;
    float* p2 = (float*)&m_rot;
    p2[0] = *(float*)&zero;
    p2[1] = *(float*)&zero;
    p2[2] = *(float*)&zero;
    m_d = d;
    m_c = c;
}

} }
