// FUNCTION: BF2 0x882be0
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_BanList_getInstance();
extern void dice_hfe_BanList_consoleRemoveKeyFromBanList_std_string_constref(void*, const std::string*);
long fn_882be0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        void* obj = dice_hfe_BanList_getInstance();
        dice_hfe_BanList_consoleRemoveKeyFromBanList_std_string_constref(obj, &s);
    }
    return 0;
}
} }
