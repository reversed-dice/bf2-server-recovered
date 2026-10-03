// FUNCTION: BF2 0x6e03d0
#include <math.h>
namespace dice { namespace hfe { namespace world {

float computeWheelSpeed(float speed, float torque, float brake, float inertia, float dt)
{
    float v = torque / inertia * dt + speed;
    float sign = v > 0.0f ? 1.0f : (v < 0.0f ? -1.0f : 0.0f);
    float m = fabsf(v) - dt * (brake / inertia);
    return (m > 0.0f ? m : 0.0f) * sign;
}

} } }
