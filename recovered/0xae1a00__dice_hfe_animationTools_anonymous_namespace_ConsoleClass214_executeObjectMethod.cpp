// FUNCTION: BF2 0xae1a00
#include <string>
namespace dice { namespace hfe {
extern void* dice_hfe_animationTools_anonymous_namespace_getActiveBundle();
extern void dice_anim_Bundle_addEvent_std_string_constref(void*, const std::string*);
long fn_ae1a00(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        void* obj = dice_hfe_animationTools_anonymous_namespace_getActiveBundle();
        dice_anim_Bundle_addEvent_std_string_constref(obj, &s);
    }
    return 0;
}
} }
