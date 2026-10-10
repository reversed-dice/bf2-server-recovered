// FUNCTION: BF2 0x62fdf0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("tank-square", 1);
float* g1 = dice::hfe::Vars::getFloat("old-turn-mod", 1.5f);
float* g2 = dice::hfe::Vars::getFloat("old-turn-limit", 1.0f);
float* g3 = dice::hfe::Vars::getFloat("flying_height", 110.0f);
float* g4 = dice::hfe::Vars::getFloat("EngineRunningTimer", 5.0f);
}
