// FUNCTION: BF2 0xae63e0
#include <string>
namespace dice { namespace hfe {
extern void* dice_anim_animationSystemTemplateManager;
long fn_ae63e0(long param_1) {
    if (*(int*)(param_1 + 0x30) == 1) {
        std::string s(*(const std::string*)*(void**)(param_1 + 0x38));
        *(char*)(param_1 + 0x108) = 0;
        typedef void (*Fn)(void*, const std::string*);
        Fn f = (Fn)(*(void***)dice_anim_animationSystemTemplateManager)[0x10/8];
        f(dice_anim_animationSystemTemplateManager, &s);
    }
    return 0;
}
} }
