// FUNCTION: BF2 0x6b18a0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("anim_skipSync", 0);
float* g1 = dice::hfe::Vars::getFloat("anim_smoothSet", 10.0f);
}
