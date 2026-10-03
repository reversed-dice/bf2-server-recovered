// FUNCTION: BF2 0x49a330
#include <string>
#include <ostream>

// dice_hfe_Player_setViewDistance_float
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_49a330 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_49a330(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_49a330();
};

} }

extern "C" void debugguard_49a330()
{
    dice::hfe::Debug_49a330(6, std::string("Game/GameLogic/Player.cpp"), 0x95a,
                     std::string(&DAT_00bb25f1)).os
        << "Cannot change view distance on player. Set globally in BF2Render.";
}
// REVERSED_FUNCTION: dice_hfe_Player_setViewDistance_float (0x49a330)
