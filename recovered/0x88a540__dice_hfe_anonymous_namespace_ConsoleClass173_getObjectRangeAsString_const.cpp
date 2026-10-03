// FUNCTION: BF2 0x88a540
#include <string>

struct PairGap_88a540 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_88a540(void* param_1) {
    PairGap_88a540 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass173_getObjectRangeAsString_const (0x88a540)
