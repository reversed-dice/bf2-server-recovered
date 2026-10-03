// FUNCTION: BF2 0xaccd80
#include <string>

struct PairGap_accd80 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_accd80(void* param_1) {
    PairGap_accd80 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass187_getObjectRangeAsString_const (0xaccd80)
