// FUNCTION: BF2 0x63a590
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    float& operator[](int i) { return (&x)[i]; }
};

namespace world {

void clipRotation(Vec3& rot, int axis)
{
    float val = rot[axis];
    if (val > 180.0f) {
        val -= 360.0f;
        rot[axis] = val;
    }
    if (val < -180.0f) {
        rot[axis] = val + 360.0f;
    }
}

} } }
