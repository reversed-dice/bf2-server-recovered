// FUNCTION: BF2 0x43f130

#include <iostream>

namespace dice { namespace hfe { class Vars {
public:
    static int* getInt(char const*, int);
    static float* getFloat(char const*, float);
}; } }

namespace {
int* g0 = dice::hfe::Vars::getInt("event-delay", 0);
int* g1 = dice::hfe::Vars::getInt("event-delay-ticks", 32);
}
