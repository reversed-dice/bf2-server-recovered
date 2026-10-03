// FUNCTION: BF2 0x577140
namespace dice { namespace hfe { namespace world {

void implicitEulerSpring(float& pos, float& vel, float dt, float k, float c, float x, float v)
{
    float kx = k * x;
    float cv = c * v;
    float a = k - cv;
    float dv = ((kx - cv) + a * dt * v) * dt / (1.0f - (kx - c) * dt - a * (dt * dt));
    vel = dv;
    pos = (dv + v) * dt;
}

} } }
