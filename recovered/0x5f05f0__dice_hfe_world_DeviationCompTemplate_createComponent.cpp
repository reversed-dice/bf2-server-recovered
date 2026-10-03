// FUNCTION: BF2 0x5f05f0
#include <string>
#include <ostream>

// dice_hfe_world_DeviationCompTemplate_createComponent
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_5f05f0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_5f05f0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_5f05f0();
};

} }

extern "C" unsigned long debugguard_5f05f0()
{
    dice::hfe::Debug_5f05f0(6, std::string("Game/Objects/Weapons/DeviationComponents/DeviationComp.h"), 0x6b,
                     std::string(&DAT_00bb25f1)).os
        << "Virtual type";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_DeviationCompTemplate_createComponent (0x5f05f0)
