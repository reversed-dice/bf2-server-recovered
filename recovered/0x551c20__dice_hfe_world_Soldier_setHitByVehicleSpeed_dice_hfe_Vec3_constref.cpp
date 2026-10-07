// FUNCTION: BF2 0x551c20
// BF2_FLAGS: -mtune=nocona
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float p0, float p1, float p2) { y = p0; x = p2; z = p1; }
};

class WorldPref { public: static int getTickCount(); };

namespace world {

class Soldier {
public:
    void setHitByVehicleSpeed(const Vec3& v);
    unsigned char m_pad[0x3a8];
    Vec3 m_hitByVehicleSpeed;   // 0x3a8
    int m_hitByVehicleTime;     // 0x3b4
};

void Soldier::setHitByVehicleSpeed(const Vec3& v)
{
    m_hitByVehicleSpeed.set(v.y, v.z, v.x);
    m_hitByVehicleTime = WorldPref::getTickCount() + 16;
}

} } }
