// FUNCTION: BF2 0x62c490
#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
float* g_engineInertia = dice::hfe::Vars::getFloat("engine-inertia", 0.0500000007f);
int* g_debugDrawEngine = dice::hfe::Vars::getInt("debug-engine", 0);
float* g_engineInertia3 = dice::hfe::Vars::getFloat("engine-inertia3", 0.959999979f);
float* g_engineInertia2 = dice::hfe::Vars::getFloat("engine-inertia2", 0.99000001f);

struct SlopeRef {
    SlopeRef() {
        *(float*)0x10927e0 = 0.173999995f;
        *(float**)0x10927d8 = (float*)0x10927e0;
    }
};
SlopeRef g_engineSlopeNoGearUpLimit;
}
