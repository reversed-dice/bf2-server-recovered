// FUNCTION: BF2 0xafaa20
#include <string>
namespace dice { namespace hfe {
extern "C" void dice_hfe_world_heightmapCluster_create_std_string_constref(std::string const&);

long cb(long param_1) {
    if (*(int*)(param_1 + 0x30) != 1) return 0;
    std::string s(**(std::string**)(param_1 + 0x38));
    *(char*)(param_1 + 0x108) = 0;
    dice_hfe_world_heightmapCluster_create_std_string_constref(s);
    return 0;
}
} }
