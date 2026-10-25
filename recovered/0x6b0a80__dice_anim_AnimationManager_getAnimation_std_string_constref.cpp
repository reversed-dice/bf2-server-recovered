// FUNCTION: BF2 0x6b0a80
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <utility>

namespace dice { namespace hfe {

struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};

} }

namespace dice { namespace anim {

class BoneAnimation {
public:
    char _pad0[0x30];
    char* m_30;
    char* m_38;
    char _pad3c[0x4a - 0x40];
    unsigned char m_4a;
    char _pad4b[0x50 - 0x4b];
    void* m_50;
    char _pad58[0x60 - 0x58];
    int m_60;

    BoneAnimation();
    bool load(std::string const& file);
};

class AnimationManager {
public:
    struct AnimationHolder {
        bool m_loaded;
        BoneAnimation* m_anim;
    };

    virtual ~AnimationManager();

    std::map<std::string, AnimationHolder, dice::hfe::NoCaseStringCompare> m_animations;
    BoneAnimation* m_lastAnim;
    bool m_active;

    BoneAnimation* getAnimation(std::string const& name);
};

BoneAnimation* AnimationManager::getAnimation(std::string const& name) {
    std::map<std::string, AnimationHolder, dice::hfe::NoCaseStringCompare>::iterator it = m_animations.find(name);
    if (it == m_animations.end()) {
        BoneAnimation* anim = new BoneAnimation();
        if (!m_active)
            anim->load(name);
        AnimationHolder holder;
        holder.m_loaded = true;
        holder.m_anim = anim;
        m_animations.insert(std::make_pair(name, holder));
        m_lastAnim = anim;
        return anim;
    }
    m_lastAnim = it->second.m_anim;
    it->second.m_loaded = true;
    return m_lastAnim;
}

} }
