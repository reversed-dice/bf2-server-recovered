// FUNCTION: BF2 0x6b8e90

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
float* g0 = dice::hfe::Vars::getFloat("anim_offsetBackwardTime", 0.5f);
}
