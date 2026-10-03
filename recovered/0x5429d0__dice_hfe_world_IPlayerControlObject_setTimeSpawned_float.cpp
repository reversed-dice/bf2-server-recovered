// FUNCTION: BF2 0x5429d0
#include <string>
#include <ostream>

// dice_hfe_world_IPlayerControlObject_setTimeSpawned_float
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_5429d0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_5429d0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_5429d0();
};

} }

extern "C" void debugguard_5429d0()
{
    dice::hfe::Debug_5429d0(6, std::string("./Scene/Object/ObjectTypes/Game/IPlayerControlObject.h"), 0xd0,
                     std::string(&DAT_00bb25f1)).os
        << "Virtual impl";
}
// REVERSED_FUNCTION: dice_hfe_world_IPlayerControlObject_setTimeSpawned_float (0x5429d0)
