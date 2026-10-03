// FUNCTION: BF2 0xacdeb0
#include <string>

struct PairGap_acdeb0 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_acdeb0(void* param_1) {
    PairGap_acdeb0 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass221_getObjectRangeAsString_const (0xacdeb0)
