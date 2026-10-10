// FUNCTION: BF2 0x583910

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
float* g0 = dice::hfe::Vars::getFloat("overheadCamera-acceleration", 250.0f);
}
