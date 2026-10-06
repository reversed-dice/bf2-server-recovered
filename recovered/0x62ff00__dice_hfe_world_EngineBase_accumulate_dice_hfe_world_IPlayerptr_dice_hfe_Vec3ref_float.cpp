// FUNCTION: BF2 0x62ff00
namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

struct IPlayer;

class EngineBase {
public:
    char pad[0x2d0];
    float m_accumulated;

    void accumulate(IPlayer* player, Vec3& vec, float dt);
};

void EngineBase::accumulate(IPlayer* player, Vec3& vec, float dt) {
    static float scale;
    float& vz = vec.z;
    float v = m_accumulated + scale * vz * dt;
    m_accumulated = v;
    if (v < -1.0f) {
        v = -1.0f;
    } else if (v > 1.0f) {
        v = 1.0f;
    }
    vz = v;
    m_accumulated = v;
}

}
}
}
