// FUNCTION: BF2 0x6b0cf0
#include <string>

namespace dice { namespace anim {

class BoneAnimation;

class AnimationManager {
public:
    std::string& getName(BoneAnimation* anim);
    std::string getShortName(BoneAnimation* anim);
};

std::string AnimationManager::getShortName(BoneAnimation* anim) {
    std::string s = getName(anim);
    int slash = (int)s.rfind("/");
    s = s.substr(slash + 1);
    int pos = (int)s.find(".baf");
    s = s.substr(0, pos);
    return s;
}

}}
