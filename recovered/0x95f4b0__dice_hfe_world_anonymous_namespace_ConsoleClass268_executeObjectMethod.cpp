// FUNCTION: BF2 0x95f4b0
#include <string>
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_SoldierTemplate;
extern "C" void* dice_hfe_world_getActiveTemplate_unsigned_int(unsigned);
extern "C" void dice_hfe_world_SoldierTemplate_skeleton3P_std_string_constref(void*, const std::string*);

long cb_0x95f4b0(long param_1) {
    if (*(int*)(param_1+0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1+0x38));
        unsigned cid = dice_hfe_world_CID_SoldierTemplate;
        *(char*)(param_1+0x108) = 0;
        void* obj = dice_hfe_world_getActiveTemplate_unsigned_int(cid);
        dice_hfe_world_SoldierTemplate_skeleton3P_std_string_constref(obj, &s);
    }
    return 0;
}
} }
