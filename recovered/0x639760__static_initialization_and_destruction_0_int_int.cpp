// FUNCTION: BF2 0x639760

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("phy-force-sleeping", 0);
int* g1 = dice::hfe::Vars::getInt("phy-force-awake", 0);
float* g2 = dice::hfe::Vars::getFloat("phy-wing-water-mod", 10.0f);
}
