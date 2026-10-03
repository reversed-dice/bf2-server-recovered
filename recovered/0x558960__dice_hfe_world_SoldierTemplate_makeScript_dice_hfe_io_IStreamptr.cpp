// FUNCTION: BF2 0x558960
#include <string>
#include <ostream>

// dice_hfe_world_SoldierTemplate_makeScript_dice_hfe_io_IStreamptr
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_558960 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_558960(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_558960();
};

} }

extern "C" unsigned long debugguard_558960()
{
    dice::hfe::Debug_558960(6, std::string("Game/Objects/Game/SoldierTemplate.cpp"), 0x4a,
                     std::string(&DAT_00bb25f1)).os
        << "SoldierTemplate doesn\'t have makeScript implemented. Save failed...";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_SoldierTemplate_makeScript_dice_hfe_io_IStreamptr (0x558960)
