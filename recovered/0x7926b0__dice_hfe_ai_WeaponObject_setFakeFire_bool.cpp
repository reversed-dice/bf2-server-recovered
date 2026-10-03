// FUNCTION: BF2 0x7926b0
#include <string>
#include <ostream>

// dice_hfe_ai_WeaponObject_setFakeFire_bool
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_7926b0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_7926b0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_7926b0();
};

} }

extern "C" unsigned long debugguard_7926b0()
{
    dice::hfe::Debug_7926b0(6, std::string("AI/AIInterface/BFKnowledge/WeaponObject.cpp"), 0x192,
                     std::string(&DAT_00bb25f1)).os
        << "Make weapon use fake fire.";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_ai_WeaponObject_setFakeFire_bool (0x7926b0)
