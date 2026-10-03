// FUNCTION: BF2 0x42a4b0
#include <string>
#include <ostream>

// dice_hfe_KickBanEvent_executeServer_int
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_42a4b0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_42a4b0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_42a4b0();
};

} }

extern "C" unsigned long debugguard_42a4b0()
{
    dice::hfe::Debug_42a4b0(6, std::string("Game/GameEvents/KickBanEvent.cpp"), 0x61,
                     std::string(&DAT_00bb25f1)).os
        << "Server shouldnt get KickBanEvents from outside.";
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_KickBanEvent_executeServer_int (0x42a4b0)
