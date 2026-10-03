// FUNCTION: BF2 0x88ae30
#include <string>

struct PairGap_88ae30 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_88ae30(void* param_1) {
    PairGap_88ae30 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass196_getObjectRangeAsString_const (0x88ae30)
