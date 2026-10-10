#include <cmath>
// FUNCTION: BF2 0x6dfe40

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };
struct Vec2 { float x, y; };

namespace world {

class BasicPhysicsSystem;
extern BasicPhysicsSystem* basicPhysicsSystem;

float computeSlopeTorque(const Vec3& a, const Vec3& b, float f0, float f1);

float computeSlopeTorque(const Vec3& a, const Vec3& b, float f0, float f1) {
    float g = f1 * ((float (*)(void*))(*(void***)basicPhysicsSystem)[0x40 / 8])(basicPhysicsSystem);
    float p = 0.0f * a.x + g * a.y + 0.0f * a.z;
    return ((0.0f - a.x * p) * b.x + (g - a.y * p) * b.y + (0.0f - a.z * p) * b.z) * f0;
}

} } }
