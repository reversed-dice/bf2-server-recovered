// FUNCTION: BF2 0x9bbd00
#include <string>

struct PairGap_9bbd00 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_9bbd00(void* param_1) {
    PairGap_9bbd00 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass396_getObjectRangeAsString_const (0x9bbd00)
