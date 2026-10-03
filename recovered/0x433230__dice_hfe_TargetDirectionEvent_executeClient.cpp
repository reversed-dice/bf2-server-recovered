// FUNCTION: BF2 0x433230
#include <string>
#include <ostream>

// dice_hfe_TargetDirectionEvent_executeClient
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_433230 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_433230(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_433230();
};

} }

extern "C" unsigned long debugguard_433230()
{
    dice::hfe::Debug_433230(6, std::string("Game/GameEvents/TargetDirectionEvent.cpp"), 0x67,
                     std::string(&DAT_00bb25f1)).os
        << "This should not be called on clients.";
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_TargetDirectionEvent_executeClient (0x433230)
