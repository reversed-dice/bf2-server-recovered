// FUNCTION: BF2 0x5af110

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
class Vec3 { public: Vec3() : x(0), y(0), z(0) {} float x, y, z; };
Vec3 zeroVec;
int* g0 = dice::hfe::Vars::getInt("phy-wreck", 1);
float* g1 = dice::hfe::Vars::getFloat("armor-invunerable-time", 1.0f);
float* g2 = dice::hfe::Vars::getFloat("armor-invunerable-time-afterwreck", 1.0f);
float* g3 = dice::hfe::Vars::getFloat("armor-max-soldier-wrecktime", 60.0f);
float* g4 = dice::hfe::Vars::getFloat("armor-water-safetycheck-time", 2.5f);
}
