// FUNCTION: BF2 0xae7d20
#include <string>

struct PairGap_ae7d20 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_ae7d20(void* param_1) {
    PairGap_ae7d20 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass110_getObjectRangeAsString_const (0xae7d20)
