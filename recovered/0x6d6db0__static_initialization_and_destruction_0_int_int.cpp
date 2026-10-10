// FUNCTION: BF2 0x6d6db0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("phy-latencyComp-useClientWindow", 1);
int* g1 = dice::hfe::Vars::getInt("phy-latencyComp-useInput", 1);
int* g2 = dice::hfe::Vars::getInt("phy-latencyComp-useRenderAhead", 0);
float* g3 = dice::hfe::Vars::getFloat("phy-latencyComp-maxRenderAheadTime", 0.0333333351f);
float* g4 = dice::hfe::Vars::getFloat("phy-latencyComp-pingFactor", 0.5f);
float* g5 = dice::hfe::Vars::getFloat("phy-latencyComp-default", 0.0500000007f);
float* g6 = dice::hfe::Vars::getFloat("phy-latencyComp-max", 0.300000012f);
float* g7 = dice::hfe::Vars::getFloat("phy-latencyComp-debug", -1.0f);
}
