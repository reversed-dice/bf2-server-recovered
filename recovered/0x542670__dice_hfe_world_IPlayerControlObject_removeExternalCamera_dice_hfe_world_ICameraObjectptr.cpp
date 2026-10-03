// FUNCTION: BF2 0x542670
#include <string>
#include <ostream>

// dice_hfe_world_IPlayerControlObject_removeExternalCamera_dice_hfe_world_ICameraObjectptr
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_542670 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_542670(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_542670();
};

} }

extern "C" void debugguard_542670()
{
    dice::hfe::Debug_542670(6, std::string("./Scene/Object/ObjectTypes/Game/IPlayerControlObject.h"), 0xae,
                     std::string(&DAT_00bb25f1)).os
        << "Default impl";
}
// REVERSED_FUNCTION: dice_hfe_world_IPlayerControlObject_removeExternalCamera_dice_hfe_world_ICameraObjectptr (0x542670)
