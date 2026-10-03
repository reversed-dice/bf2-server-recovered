// FUNCTION: BF2 0x6a6ac0
#include <string>
#include <ostream>

// dice_hfe_world_IProjectileObject_getLauncherWeapon_const
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_6a6ac0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_6a6ac0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_6a6ac0();
};

} }

extern "C" unsigned long debugguard_6a6ac0()
{
    dice::hfe::Debug_6a6ac0(6, std::string("Scene/Object/ObjectTypes/Game/Weapons/IProjectileObject.h"), 0x57,
                     std::string(&DAT_00bb25f1)).os
        << "Virtual impl";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_IProjectileObject_getLauncherWeapon_const (0x6a6ac0)
