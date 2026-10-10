// FUNCTION: BF2 0x6cd3e0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
float* g0 = dice::hfe::Vars::getFloat("anim_test", 0.25f);
float* g1 = dice::hfe::Vars::getFloat("anim_startLeftOffset", 0.200000003f);
float* g2 = dice::hfe::Vars::getFloat("anim_startRightOffset", 0.200000003f);
}
