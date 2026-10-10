// FUNCTION: BF2 0x536bd0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
class Vec3 { public: Vec3() : x(0), y(0), z(0) {} float x, y, z; };
Vec3 zeroVec;
int* g0 = dice::hfe::Vars::getInt("pco-min-playing-ticks", 20);
int* g1 = dice::hfe::Vars::getInt("pco-show-gcs-stats", 0);
float* g2 = dice::hfe::Vars::getFloat("pco-unmanned-random-input-time", 10.0f);
float* g3 = dice::hfe::Vars::getFloat("pco-unmanned-max-minor-axis", 0.400000006f);
float* g4 = dice::hfe::Vars::getFloat("pco-unmanned-min-major-axis", 0.600000024f);
int* g5 = dice::hfe::Vars::getInt("pco-exitpos-testlod", 2);
}
