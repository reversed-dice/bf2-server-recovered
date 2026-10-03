// FUNCTION: BF2 0x5428b0
#include <string>
#include <ostream>

// dice_hfe_world_IPlayerControlObject_checkSpecialToggleLastUpdate_dice_hfe_io_PlayerInputMap
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_5428b0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_5428b0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_5428b0();
};

} }

extern "C" unsigned long debugguard_5428b0()
{
    dice::hfe::Debug_5428b0(6, std::string("./Scene/Object/ObjectTypes/Game/IPlayerControlObject.h"), 0xc1,
                     std::string(&DAT_00bb25f1)).os
        << "Virtual impl";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_IPlayerControlObject_checkSpecialToggleLastUpdate_dice_hfe_io_PlayerInputMap (0x5428b0)
