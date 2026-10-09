// FUNCTION: BF2 0x428590
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x;
    float y;
    float z;
};

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad8[0x8];
};

class HandleDropEvent : public GameEvent {
public:
    HandleDropEvent(unsigned char a, unsigned short b, unsigned short c, Vec3 const& pos);
    virtual ~HandleDropEvent();

    unsigned char m_a;     // +0x10
    unsigned short m_b;    // +0x12
    unsigned short m_c;    // +0x14
    Vec3 m_pos;            // +0x18
};

HandleDropEvent::HandleDropEvent(unsigned char a, unsigned short b, unsigned short c, Vec3 const& pos)
{
    m_a = a;
    m_b = b;
    m_c = c;
    float* d = (float*)&m_pos;
    float bz = pos.z;
    float by = pos.y;
    float bx = pos.x;
    d[0] = bx;
    d[1] = by;
    d[2] = bz;
}

} }
