// FUNCTION: BF2 0xae4ce0
#include <string>
namespace dice { namespace hfe {
extern void* dice_anim_valueHolderManager;
extern void dice_anim_ValueHolderManager_createValueHolder_std_string_constref(void*, const std::string*);
long fn_ae4ce0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        dice_anim_ValueHolderManager_createValueHolder_std_string_constref(dice_anim_valueHolderManager, &s);
    }
    return 0;
}
} }
