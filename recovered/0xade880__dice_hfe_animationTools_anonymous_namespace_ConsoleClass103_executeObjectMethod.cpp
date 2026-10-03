// FUNCTION: BF2 0xade880
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <utility>
namespace dice { namespace hfe {
extern "C" char* dice_anim_ragDollTemplate;

long cb(long param_1) {
    if (*(int*)(param_1 + 0x30) != 2) return 0;
    int a = **(int**)(param_1 + 0x38);
    int b = **(int**)(param_1 + 0x40);
    *(char*)(param_1 + 0x108) = 0;
    ((std::vector<std::pair<int, int> >*)(dice_anim_ragDollTemplate + 0x38))
        ->push_back(std::pair<int, int>(a, b));
    return 0;
}
} }
