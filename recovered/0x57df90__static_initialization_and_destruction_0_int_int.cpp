// FUNCTION: BF2 0x57df90

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
float* g0 = dice::hfe::Vars::getFloat("cam-slow", 0.100000001f);
float* g1 = dice::hfe::Vars::getFloat("cam-normal", 1.0f);
float* g2 = dice::hfe::Vars::getFloat("cam-fast", 10.0f);
float* g3 = dice::hfe::Vars::getFloat("cam-stiffness", 1.5f);
float* g4 = dice::hfe::Vars::getFloat("cam-interpolate-attachobject", 1.20000005f);
float* g5 = dice::hfe::Vars::getFloat("deathcam-terrainoffset", 0.800000012f);
}
