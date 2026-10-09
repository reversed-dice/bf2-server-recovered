// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4230e0
// FUNCTION: BF2 0x4230e0
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
    CreateObjectEvent(unsigned int a, unsigned short b, int d, Vec3 const& pos, Vec3 const& rot);
    virtual ~CreateObjectEvent();

    unsigned int m_a;      // +0x10
    unsigned short m_b;    // +0x14
    Vec3 m_pos;            // +0x18
    Vec3 m_rot;            // +0x24
    int m_d;               // +0x30
    unsigned int m_c;      // +0x34
};

CreateObjectEvent::CreateObjectEvent(unsigned int a, unsigned short b, int d, Vec3 const& pos, Vec3 const& rot)
{
    m_a = a;
    m_b = b;
    float* d1 = (float*)&m_pos;
    float pz = pos.z;
    float py = pos.y;
    float px = pos.x;
    d1[0] = px;
    d1[1] = py;
    d1[2] = pz;

    float* d2 = (float*)&m_rot;
    float rz = rot.z;
    float ry = rot.y;
    float rx = rot.x;
    d2[0] = rx;
    d2[1] = ry;
    d2[2] = rz;

    m_d = d;
    m_c = 1;
}

} }
