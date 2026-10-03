// FUNCTION: BF2 0xae1670
#include <string>
namespace dice { namespace hfe {
extern "C" char* dice_hfe_animationTools_anonymous_namespace_getActiveBundle();
extern "C" void dice_anim_Bundle_setEventStartTime_std_string_constref_float(char*, std::string const&, float);

long cb(long p) {
    if (*(int*)(p + 0x30) != 2) return 0;
    std::string s(**(std::string**)(p + 0x38));
    // PERM_ORDER
    float v = **(float**)(p + 0x40);
    *(char*)(p + 0x108) = 0;
    // PERM_ORDER_END
    char* b = dice_hfe_animationTools_anonymous_namespace_getActiveBundle();
    dice_anim_Bundle_setEventStartTime_std_string_constref_float(b, s, v);
    return 0;
}
} }
