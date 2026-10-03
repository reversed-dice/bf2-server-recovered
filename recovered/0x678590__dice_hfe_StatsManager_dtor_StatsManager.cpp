// FUNCTION: BF2 0x678590
#include <string>
extern "C" void dice_hfe_StatsManager_disconnect();
extern "C" void dtor_678590(char* param_1) {
    *(void**)param_1 = (void*)0xb8bc90;
    dice_hfe_StatsManager_disconnect();
    ((std::string*)(param_1 + 0x18))->~basic_string();
}
// REVERSED_FUNCTION: dice_hfe_StatsManager_dtor_StatsManager (0x678590)
