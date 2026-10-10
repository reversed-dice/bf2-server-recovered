// FUNCTION: BF2 0x5854b0

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("rot-use-old", 1);
float* g1 = dice::hfe::Vars::getFloat("rotationalbundle-sound-smooth-time", 0.150000006f);
float* g2 = dice::hfe::Vars::getFloat("rotationalbundle-max-speed-mod", 30.0f);
}
