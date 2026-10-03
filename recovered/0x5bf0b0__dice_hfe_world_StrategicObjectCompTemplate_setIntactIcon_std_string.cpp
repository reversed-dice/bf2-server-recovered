// FUNCTION: BF2 0x5bf0b0
#include <string>

extern "C" void setter_5bf0b0(long param_1, std::string* param_2) {
    ((std::string*)(param_1 + 0x30))->assign(*param_2);
    std::string tmp(*param_2);
    *(unsigned int*)(param_1 + 0x3c) = 0;
}
// REVERSED_FUNCTION: dice_hfe_world_StrategicObjectCompTemplate_setIntactIcon_std_string (0x5bf0b0)
