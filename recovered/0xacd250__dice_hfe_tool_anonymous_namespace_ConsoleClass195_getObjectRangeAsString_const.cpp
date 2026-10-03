// FUNCTION: BF2 0xacd250
#include <string>

struct PairGap_acd250 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_acd250(void* param_1) {
    PairGap_acd250 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass195_getObjectRangeAsString_const (0xacd250)
