// FUNCTION: BF2 0xae9f80
#include <string>

struct PairGap_ae9f80 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_ae9f80(void* param_1) {
    PairGap_ae9f80 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass191_getObjectRangeAsString_const (0xae9f80)
