// FUNCTION: BF2 0x884980
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_CombatAreaManager_m_instance;
extern void dice_hfe_CombatAreaManager_createCombatArea_std_string_constref(void*, const std::string*);
long fn_884980(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        dice_hfe_CombatAreaManager_createCombatArea_std_string_constref(dice_hfe_CombatAreaManager_m_instance, &s);
    }
    return 0;
}
} }
