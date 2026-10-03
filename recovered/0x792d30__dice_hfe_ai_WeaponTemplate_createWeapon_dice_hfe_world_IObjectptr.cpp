// FUNCTION: BF2 0x792d30
#include <string>
#include <ostream>
#include <new>

// dice_hfe_ai_WeaponTemplate_createWeapon_dice_hfe_world_IObjectptr
// Allocate, construct, guard on null, return. The allocation is split into
// ::operator new plus a declared-only constructor so the null test survives.

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_792d30 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_792d30(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_792d30();
};

// Declared, not defined: the target CALLs it, so this is a relocation.
void dice_hfe_ai_WeaponObject_WeaponObject_dice_hfe_ai_WeaponTemplateptr_792d30(void* self, void* a1);

} }

extern "C" void* factory_792d30(void* param_1)
{
    void* p = ::operator new(0x40);
    dice::hfe::dice_hfe_ai_WeaponObject_WeaponObject_dice_hfe_ai_WeaponTemplateptr_792d30(p, param_1);
    if (p == 0) {
        dice::hfe::Debug_792d30(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                         std::string(&DAT_00bb25f1)).os
            << "AI::Allocation failed";
    }
    return p;
}
// REVERSED_FUNCTION: dice_hfe_ai_WeaponTemplate_createWeapon_dice_hfe_world_IObjectptr (0x792d30)
