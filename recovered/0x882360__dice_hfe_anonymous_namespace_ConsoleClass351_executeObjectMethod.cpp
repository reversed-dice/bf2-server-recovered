// FUNCTION: BF2 0x882360
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_reservedSlots;
extern void dice_hfe_ReservedSlots_addNick_std_string_constref(void*, const std::string*);
long fn_882360(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        dice_hfe_ReservedSlots_addNick_std_string_constref(dice_hfe_reservedSlots, &s);
    }
    return 0;
}
} }
