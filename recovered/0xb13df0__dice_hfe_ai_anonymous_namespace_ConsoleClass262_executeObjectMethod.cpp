// FUNCTION: BF2 0xb13df0
#include <string>
namespace dice { namespace hfe {
extern "C" char* dice_hfe_ai_BFConsole_m_instance;
extern "C" void dice_hfe_ai_BFConsole_addAIRadioMessage_std_string_constref_float_float_float(char*, std::string const&, float, float, float);

long cb(long p) {
    if (*(int*)(p + 0x30) != 4) return 0;
    std::string s(**(std::string**)(p + 0x38));
    // PERM_ORDER
    float a = **(float**)(p + 0x40);
    float b = **(float**)(p + 0x48);
    float c = **(float**)(p + 0x50);
    *(char*)(p + 0x108) = 0;
    // PERM_ORDER_END
    dice_hfe_ai_BFConsole_addAIRadioMessage_std_string_constref_float_float_float(
        dice_hfe_ai_BFConsole_m_instance, s, a, b, c);
    return 0;
}
} }
