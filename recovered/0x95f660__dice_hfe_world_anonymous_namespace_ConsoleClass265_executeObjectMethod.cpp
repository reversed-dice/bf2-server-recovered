// FUNCTION: BF2 0x95f660
#include <string>
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_SoldierTemplate;
extern "C" char* dice_hfe_world_getActiveTemplate_unsigned_int(unsigned);

long cb(long p) {
    if (*(int*)(p + 0x30) != 1) return 0;
    std::string s(**(std::string**)(p + 0x38));
    // PERM_ORDER
    unsigned cid = dice_hfe_world_CID_SoldierTemplate;
    *(char*)(p + 0x108) = 0;
    // PERM_ORDER_END
    char* t = dice_hfe_world_getActiveTemplate_unsigned_int(cid);
    ((std::string*)(t + 0x2b8))->assign(s);
    return 0;
}
} }
