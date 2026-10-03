// FUNCTION: BF2 0x9c9730
#include <string.h>
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_EmitterTemplate;
extern "C" char* dice_hfe_world_getActiveTemplate_unsigned_int(unsigned);

long cb(long p) {
    int sel = *(int*)(p + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(p + 0x108) = 1;
        // PERM_ORDER
        unsigned cid = dice_hfe_world_CID_EmitterTemplate;
        char* out = (char*)(p + 0x10c);
        // PERM_ORDER_END
        char* t = dice_hfe_world_getActiveTemplate_unsigned_int(cid);
        memcpy(out, t + 0x228, 0x1ac);
        return p + 0x10c;
    }
    nz:
    if (sel != 1) return 0;
    {
        char tmp[0x1ac];
        memcpy(tmp, *(void**)(p + 0x38), 0x1ac);
        // PERM_ORDER
        unsigned cid = dice_hfe_world_CID_EmitterTemplate;
        *(char*)(p + 0x108) = 0;
        // PERM_ORDER_END
        char* t = dice_hfe_world_getActiveTemplate_unsigned_int(cid);
        memcpy(t + 0x228, tmp, 0x1ac);
        return 0;
    }
}
} }
