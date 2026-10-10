// FUNCTION: BF2 0x69f300

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("phy-list-physics-nodes", 0);
int* g1 = dice::hfe::Vars::getInt("phy-list-response-physics", 0);
}
