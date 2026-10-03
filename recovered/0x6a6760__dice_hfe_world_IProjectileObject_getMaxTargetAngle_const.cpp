// FUNCTION: BF2 0x6a6760
#include <string>
#include <ostream>

// dice_hfe_world_IProjectileObject_getMaxTargetAngle_const
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_6a6760 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_6a6760(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_6a6760();
};

} }

extern "C" float debugguard_6a6760()
{
    dice::hfe::Debug_6a6760(6, std::string("Scene/Object/ObjectTypes/Game/Weapons/IProjectileObject.h"), 0x93,
                     std::string(&DAT_00bb25f1)).os
        << "Virtual impl";
    return 0.0f;
}
// REVERSED_FUNCTION: dice_hfe_world_IProjectileObject_getMaxTargetAngle_const (0x6a6760)
