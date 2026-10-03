// FUNCTION: BF2 0x959eb0
#include <string>
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_MultiFireCompTemplate;
extern "C" unsigned dice_hfe_world_IID_IWeaponFireCompTemplate;
extern "C" char* dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);
extern "C" void dice_hfe_world_MultiFireCompTemplate_removeBarrelName_std_string_constref(char*, std::string const&);

long cb(long p) {
    if (*(int*)(p + 0x30) != 1) return 0;
    std::string s(**(std::string**)(p + 0x38));
    // PERM_ORDER
    unsigned cid = dice_hfe_world_CID_MultiFireCompTemplate;
    unsigned iid = dice_hfe_world_IID_IWeaponFireCompTemplate;
    *(char*)(p + 0x108) = 0;
    // PERM_ORDER_END
    char* c = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(iid, cid);
    dice_hfe_world_MultiFireCompTemplate_removeBarrelName_std_string_constref(c, s);
    return 0;
}
} }
