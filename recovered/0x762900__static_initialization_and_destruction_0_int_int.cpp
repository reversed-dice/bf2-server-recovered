// FUNCTION: BF2 0x762900

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
class Vec3 { public: Vec3() : x(0), y(0), z(0) {} float x, y, z; };
Vec3 zeroVec;
float* g0 = dice::hfe::Vars::getFloat("engine-sound-smooth-time", 0.100000001f);
float* g1 = dice::hfe::Vars::getFloat("rpm-wheel", 0.0599999987f);
float* g2 = dice::hfe::Vars::getFloat("rpm-k", 10.0f);
}
