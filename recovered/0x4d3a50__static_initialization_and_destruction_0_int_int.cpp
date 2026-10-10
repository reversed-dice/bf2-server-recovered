// FUNCTION: BF2 0x4d3a50

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
class Vec3 { public: Vec3() : x(0), y(0), z(0) {} float x, y, z; };
Vec3 zeroVec;
float* g0 = dice::hfe::Vars::getFloat("server-sleep-overhead-time", 0.00499999989f);
}
