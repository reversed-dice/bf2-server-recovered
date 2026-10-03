// FUNCTION: BF2 0x8aedb0
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_bf2Engine;
extern void dice_hfe_BF2Engine_recordDemo_std_string_constref(void*, const std::string*);
long fn_8aedb0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        dice_hfe_BF2Engine_recordDemo_std_string_constref(dice_hfe_bf2Engine, &s);
    }
    return 0;
}
} }
