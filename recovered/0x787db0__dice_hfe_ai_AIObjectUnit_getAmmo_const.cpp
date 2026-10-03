// FUNCTION: BF2 0x787db0
#include <string>
#include <ostream>

// dice_hfe_ai_AIObjectUnit_getAmmo_const
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_787db0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_787db0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_787db0();
};

} }

extern "C" unsigned long debugguard_787db0()
{
    dice::hfe::Debug_787db0(6, std::string("./AI/AIInterface/BFKnowledge/AIObjectUnit.inl"), 0x18,
                     std::string(&DAT_00bb25f1)).os
        << "Does not work, is this really used?";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectUnit_getAmmo_const (0x787db0)
