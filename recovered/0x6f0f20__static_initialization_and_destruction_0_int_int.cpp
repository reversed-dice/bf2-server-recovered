// FUNCTION: BF2 0x6f0f20

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
class Vec3 { public: Vec3() : x(0), y(0), z(0) {} float x, y, z; };
Vec3 zeroVec;
float* g0 = dice::hfe::Vars::getFloat("p-pos-damp", 0.99000001f);
float* g1 = dice::hfe::Vars::getFloat("p-pos-damp-water", 0.899999976f);
int* g2 = dice::hfe::Vars::getInt("phy-print", 4294967295);
int* g3 = dice::hfe::Vars::getInt("phy-draw-soldier-bullet-collision", 0);
float* g4 = dice::hfe::Vars::getFloat("phy-soldier-stop-float", 0.899999976f);
}
