// FUNCTION: BF2 0xae5a70
#include <string>
namespace dice { namespace hfe {
struct Mgr {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual char* getActive();
};
extern "C" Mgr* dice_anim_animationSystemTemplateManager;
extern "C" void dice_anim_AnimationSystemTemplate_save_std_string_constref(char*, std::string const&);

long cb(long p) {
    if (*(int*)(p + 0x30) != 1) return 0;
    std::string s(**(std::string**)(p + 0x38));
    *(char*)(p + 0x108) = 0;
    char* t = dice_anim_animationSystemTemplateManager->getActive();
    dice_anim_AnimationSystemTemplate_save_std_string_constref(t, s);
    return 0;
}
} }
