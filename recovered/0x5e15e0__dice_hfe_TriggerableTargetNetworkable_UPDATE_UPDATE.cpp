// FUNCTION: BF2 0x5e15e0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {} };

class TriggerableTargetNetworkable {
public:
    struct UPDATE {
        UPDATE();
        float m_time;
        bool m_active;
        Vec3 m_pos;
        Vec3 m_rot;
        int m_20;
        int m_24;
    };
};

TriggerableTargetNetworkable::UPDATE::UPDATE()
    : m_time(0.0f), m_active(false), m_20(0), m_24(0)
{
}

} }
