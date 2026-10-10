// FUNCTION: BF2 0x68c9a0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
class Vec3 { public: Vec3() : x(0), y(0), z(0) {} float x, y, z; };
Vec3 zeroVec;
int* g0 = dice::hfe::Vars::getInt("debug-outputNewObject", 0);
float* g1 = dice::hfe::Vars::getFloat("objectManager-cullHandleUpdateOnClientFactor", 0.5f);
}
