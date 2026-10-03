// FUNCTION: BF2 0x5bf160
#include <string>

extern "C" void setter_5bf160(long param_1, std::string* param_2) {
    ((std::string*)(param_1 + 0x28))->assign(*param_2);
    std::string tmp(*param_2);
    *(unsigned int*)(param_1 + 0x38) = 0;
}
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_setDestroyedIcon_std_string (0x5bf160)
