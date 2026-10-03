// FUNCTION: BF2 0xacba40
#include <string>

struct PairGap_acba40 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_acba40(void* param_1) {
    PairGap_acba40 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass145_getObjectRangeAsString_const (0xacba40)
