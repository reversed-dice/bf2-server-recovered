// FUNCTION: BF2 0x6785e0
#include <string>
extern "C" void dice_hfe_StatsManager_disconnect();
extern "C" void dtor_6785e0(char* param_1) {
    *(void**)param_1 = (void*)0xb8bc90;
    dice_hfe_StatsManager_disconnect();
    ((std::string*)(param_1 + 0x18))->~basic_string();
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_StatsManager_dtor_StatsManager (0x6785e0)
