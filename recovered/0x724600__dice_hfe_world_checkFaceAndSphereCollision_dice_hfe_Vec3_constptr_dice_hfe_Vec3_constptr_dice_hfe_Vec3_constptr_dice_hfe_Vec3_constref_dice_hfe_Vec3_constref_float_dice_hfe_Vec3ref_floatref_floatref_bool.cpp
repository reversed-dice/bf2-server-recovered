// FUNCTION: BF2 0x724600
#include <string>
#include <ostream>

// dice_hfe_world_checkFaceAndSphereCollision_dice_hfe_Vec3_constptr_dice_hfe_Vec3_constptr_dice_hfe_Vec3_constptr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_float_dice_hfe_Vec3ref_floatref_floatref_bool
// Debug guard: build a Debug temporary, stream one message, return. Debug
// carries its ostream at +0x20 and is 0x180 bytes; modelling that size is what
// makes the frame match. Both strings are temporaries so they are constructed
// tag-first and destroyed after the Debug temporary.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_724600 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_724600(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_724600();
};

} }

extern "C" unsigned long debugguard_724600()
{
    dice::hfe::Debug_724600(6, std::string("Physics/GeomUtil.cpp"), 0x2f2,
                     std::string(&DAT_00bb25f1)).os
        << "not impleneted yet";
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_checkFaceAndSphereCollision_dice_hfe_Vec3_constptr_dice_hfe_Vec3_constptr_dice_hfe_Vec3_constptr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_float_dice_hfe_Vec3ref_floatref_floatref_bool (0x724600)
