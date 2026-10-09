// FUNCTION: BF2 0x4228f0
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

class CreateKitEvent : public GameEvent {
public:
    CreateKitEvent(unsigned int a, unsigned short b, unsigned int c, int d, Vec3 const& pos);
    virtual ~CreateKitEvent();

    unsigned int m_a;      // +0x10
    unsigned short m_b;    // +0x14
    Vec3 m_pos;            // +0x18
    unsigned int m_c;      // +0x24
    int m_d;               // +0x28
};

CreateKitEvent::CreateKitEvent(unsigned int a, unsigned short b, unsigned int c, int d, Vec3 const& pos)
{
    m_a = a;
    m_b = b;
    float* p = (float*)&m_pos;
    float bz = pos.z;
    float by = pos.y;
    float bx = pos.x;
    p[0] = bx;
    p[1] = by;
    p[2] = bz;
    m_c = c;
    m_d = d;
}

} }
