// FUNCTION: BF2 0x959d00
#include <string>
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_MultiFireCompTemplate;
extern "C" unsigned dice_hfe_world_IID_IWeaponFireCompTemplate;
extern "C" char* dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);
extern "C" bool dice_hfe_world_MultiFireCompTemplate_isBarrel_std_string_constref(char*, std::string const&);

long cb(long p) {
    long r = 0;
    if (*(int*)(p + 0x30) == 1) {
        std::string s(**(std::string**)(p + 0x38));
        r = p + 0x10a;
        // PERM_ORDER
        unsigned cid = dice_hfe_world_CID_MultiFireCompTemplate;
        unsigned iid = dice_hfe_world_IID_IWeaponFireCompTemplate;
        *(char*)(p + 0x108) = 1;
        // PERM_ORDER_END
        char* c = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(iid, cid);
        *(char*)(p + 0x10a) = dice_hfe_world_MultiFireCompTemplate_isBarrel_std_string_constref(c, s);
    }
    return r;
}
} }
