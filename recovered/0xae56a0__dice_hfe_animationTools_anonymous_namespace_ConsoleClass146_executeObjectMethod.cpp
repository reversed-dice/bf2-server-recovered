// FUNCTION: BF2 0xae56a0
#include <string>

namespace dice { namespace anim {

class AnimationManager {
public:
    std::string const& getActiveAnimationFile() const;
    void setActiveAnimationFile(std::string const& name);
};

} }

namespace dice { namespace hfe { namespace animationTools { namespace anonymous_namespace {

dice::anim::AnimationManager* getActiveAnimationManager();

void* executeObjectMethod(void* base) {
    char* self = (char*)base;
    int mode = *(int*)(self + 0x30);
    if (mode == 0) {
        *(unsigned char*)(self + 0x108) = 1;
        ((std::string*)(self + 0x110))->assign(getActiveAnimationManager()->getActiveAnimationFile());
        return (std::string*)(self + 0x110);
    }
    if (mode != 1) return 0;
    std::string s(*(const std::string*)*(void**)(self + 0x38));
    *(unsigned char*)(self + 0x108) = 0;
    getActiveAnimationManager()->setActiveAnimationFile(s);
    return 0;
}

} } } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass146_executeObjectMethod (0xae56a0)
