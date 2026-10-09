// FUNCTION: BF2 0x6f2630
// BF2_FLAGS: -fno-strict-aliasing
namespace dice {
namespace hfe {

struct Vec3 {
    float x;
    float y;
    float z;
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
};

namespace world {

class Soldier {
public:
    void setHitByVehicleSpeed(const Vec3& speed);
};

class SoldierResponsePhysics {
public:
    char _pad[0x28];
    Soldier* m_soldier;

    void hitByMovingObject(const Vec3& speed);
};

} // namespace world
} // namespace hfe
} // namespace dice

extern const float* g_soldierOverrunImpactModifier;

void dice::hfe::world::SoldierResponsePhysics::hitByMovingObject(const Vec3& speed)
{
    float mod = *g_soldierOverrunImpactModifier;
    float x = mod * speed.x;
    float z = mod * speed.z;
    float y = mod * speed.y;
    m_soldier->setHitByVehicleSpeed(dice::hfe::Vec3(x, y, z));
}
