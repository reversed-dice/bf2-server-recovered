// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x426d70
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

class GrapplingHookContainerDetachEvent : public GameEvent {
public:
    GrapplingHookContainerDetachEvent(int hookId, Vec3 const& pos);
    virtual ~GrapplingHookContainerDetachEvent();

    int m_hookId;
    Vec3 m_pos;
};

GrapplingHookContainerDetachEvent::GrapplingHookContainerDetachEvent(int hookId, Vec3 const& pos)
{
    float* d = (float*)((char*)this + 0x14);
    int zero = 0;
    d[0] = *(float*)&zero;
    d[1] = *(float*)&zero;
    d[2] = *(float*)&zero;
    m_hookId = hookId;
    float bz = pos.z;
    float by = pos.y;
    float bx = pos.x;
    d[0] = bx;
    d[1] = by;
    d[2] = bz;
}

} }
