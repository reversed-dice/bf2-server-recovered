// FUNCTION: BF2 0x4529e0
#include <string>

extern "C" {
extern char DAT_00bb25f1;
void dice_hfe_BanList_consoleAddAddressToBanList_std_string_constref_std_string_constref(void*, void*, std::string*);
}

extern "C" void wrapper_4529e0(void* param_1, void* param_2) {
    std::string tmp((const char*)&DAT_00bb25f1);
    dice_hfe_BanList_consoleAddAddressToBanList_std_string_constref_std_string_constref(param_1, param_2, &tmp);
}
// REVERSED_FUNCTION: dice_hfe_BanList_consoleAddAddressToBanList_std_string_constref (0x4529e0)
