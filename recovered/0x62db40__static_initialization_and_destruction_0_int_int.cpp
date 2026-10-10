// FUNCTION: BF2 0x62db40

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("debug-engine", 0);
int* g1 = dice::hfe::Vars::getInt("show-engine", 0);
float* g2 = dice::hfe::Vars::getFloat("force-reg-limit", 20.0f);
float* g3 = dice::hfe::Vars::getFloat("phy-gas", 1.0f);
float* g4 = dice::hfe::Vars::getFloat("phy-turn", 0.100000001f);
float* g5 = dice::hfe::Vars::getFloat("fb-mod", 1.0f);
float* g6 = dice::hfe::Vars::getFloat("phy-break-mod", 1.0f);
float* g7 = dice::hfe::Vars::getFloat("phy-hand-break-rpm", 0.100000001f);
float* g8 = dice::hfe::Vars::getFloat("phy-hand-break-adjust", 0.0500000007f);
int* g9 = dice::hfe::Vars::getInt("phy-hand-break-release", 10);
float* g10 = dice::hfe::Vars::getFloat("phy-engine-slope", 1.0f);
float* g11 = dice::hfe::Vars::getFloat("phy-engine-inertia", 0.0500000007f);
float* g12 = dice::hfe::Vars::getFloat("phy-tank-engine-inertia", 0.0700000003f);
}
