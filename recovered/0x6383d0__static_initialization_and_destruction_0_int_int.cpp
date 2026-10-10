// FUNCTION: BF2 0x6383d0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("phy-force-sleeping", 0);
int* g1 = dice::hfe::Vars::getInt("phy-force-awake", 0);
float* g2 = dice::hfe::Vars::getFloat("phy-fri-wheel", 0.99000001f);
float* g3 = dice::hfe::Vars::getFloat("phy-fri-wheel2", 1.0f);
float* g4 = dice::hfe::Vars::getFloat("wheel-inertia", 0.100000001f);
int* g5 = dice::hfe::Vars::getInt("phy-spring-server-debug", 1);
int* g6 = dice::hfe::Vars::getInt("phy-spring-client-debug", 0);
float* g7 = dice::hfe::Vars::getFloat("wh-torque-mult", 0.5f);
float* g8 = dice::hfe::Vars::getFloat("wh-torque-offs", 1.0f);
}
