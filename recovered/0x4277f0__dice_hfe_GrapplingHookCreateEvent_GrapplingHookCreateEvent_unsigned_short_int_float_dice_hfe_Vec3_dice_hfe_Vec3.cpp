// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4277f0
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

class GrapplingHookCreateEvent : public GameEvent {
public:
    GrapplingHookCreateEvent(unsigned short a, int b, float c, Vec3 const& pos, Vec3 const& rot);
    virtual ~GrapplingHookCreateEvent();

    unsigned short m_a; // +0x10
    int m_b;            // +0x14
    float m_c;          // +0x18
    Vec3 m_pos;         // +0x1c
    Vec3 m_rot;         // +0x28
};

GrapplingHookCreateEvent::GrapplingHookCreateEvent(unsigned short a, int b, float c, Vec3 const& pos, Vec3 const& rot)
{
    float* d1 = (float*)((char*)this + 0x1c);
    float* d2 = (float*)((char*)this + 0x28);
    int zero = 0;
    d1[0] = *(float*)&zero;
    d1[1] = *(float*)&zero;
    d1[2] = *(float*)&zero;
    d2[0] = *(float*)&zero;
    d2[1] = *(float*)&zero;
    d2[2] = *(float*)&zero;

    m_a = a;
    m_b = b;
    m_c = c;

    float pz = pos.z;
    float py = pos.y;
    float px = pos.x;
    d1[0] = px;
    d1[1] = py;
    d1[2] = pz;

    float rz = rot.z;
    float ry = rot.y;
    float rx = rot.x;
    d2[0] = rx;
    d2[1] = ry;
    d2[2] = rz;
}

} }
