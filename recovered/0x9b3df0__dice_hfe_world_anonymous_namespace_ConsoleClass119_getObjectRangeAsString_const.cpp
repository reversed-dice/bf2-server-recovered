// FUNCTION: BF2 0x9b3df0
#include <string>

struct PairGap_9b3df0 {
    std::string first;
    long _pad;
    std::string second;
};

extern "C" void std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(void*, std::string*, std::string*);

extern "C" void* getObjectRangeAsString_9b3df0(void* param_1) {
    PairGap_9b3df0 result;
    std_pair_std_string_std_string_pair_std_string_constref_std_string_constref(param_1, &result.second, &result.first);
    return param_1;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass119_getObjectRangeAsString_const (0x9b3df0)
