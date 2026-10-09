// FUNCTION: BF2 0x4346e0
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

class UpdateTriggerEvent : public GameEvent {
public:
    UpdateTriggerEvent(unsigned int a, Vec3 const& v1, Vec3 const& v2, int b, int c);
    virtual ~UpdateTriggerEvent();

    unsigned int m_a;      // +0x10
    int _pad;              // +0x14
    Vec3 m_v1;             // +0x18
    Vec3 m_v2;             // +0x24
    int m_b;               // +0x30
    int m_c;               // +0x34
};

UpdateTriggerEvent::UpdateTriggerEvent(unsigned int a, Vec3 const& v1, Vec3 const& v2, int b, int c)
{
    m_a = a;
    float* p1 = (float*)&m_v1;
    float bz1 = v1.z;
    float by1 = v1.y;
    float bx1 = v1.x;
    p1[0] = bx1;
    p1[1] = by1;
    p1[2] = bz1;

    float* p2 = (float*)&m_v2;
    float bz2 = v2.z;
    float by2 = v2.y;
    float bx2 = v2.x;
    p2[0] = bx2;
    p2[1] = by2;
    p2[2] = bz2;

    m_b = 0;
    m_c = 0;
}

} }
