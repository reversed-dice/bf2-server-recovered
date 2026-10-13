// FUNCTION: BF2 0x707e00
#include <iostream>

namespace dice { namespace hfe { namespace world {

class Vec3
{
public:
    Vec3() : x(0), y(0), z(0) {}
    float x, y, z;
};

class Mat3
{
public:
    Mat3()
    {
        m[0] = 1.0f; m[1] = 0; m[2] = 0;
        m[3] = 0; m[4] = 1.0f; m[5] = 0;
        m[6] = 0; m[7] = 0; m[8] = 1.0f;
    }
    float m[9];
};

Vec3 argDirection;
Mat3 axis;

} } }
