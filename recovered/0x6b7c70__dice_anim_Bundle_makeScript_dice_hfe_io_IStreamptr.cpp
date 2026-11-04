// FUNCTION: BF2 0x6b7c70
// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 --param max-inline-insns-single=100000 --param max-inline-insns-auto=100000 -fno-strict-aliasing
#include <sstream>
#include <string>
#include <ostream>
#include <list>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace anim {

class BoneAnimation;

class AnimationManager {
public:
    std::string const& getName(BoneAnimation* anim);
};

extern AnimationManager* animationManager;

class Bundle {
public:
    struct BundleEvent {
        float m_time;              // +0x0 of the data
        int _pad;                  // +0x4
        std::string m_text;        // +0x8
    };

    std::list<std::pair<float, BoneAnimation*> > m_bones;   // 0x00
    std::list<BundleEvent> m_events;                        // 0x10
    char _pad0[0xc];                                        // 0x20
    float m_fadeInTime;                                     // 0x2c
    float m_fadeOutTime;                                    // 0x30
    char m_jumpToLastAnimationAtStop;                       // 0x34
    char m_useSpeedAsTime;                                  // 0x35
    char m_abruptPlayback;                                  // 0x36
    char m_looping;                                         // 0x37
    char m_playBackward;                                    // 0x38
    char m_playForever;                                     // 0x39

    std::string const& getName() const;
    void makeScript(dice::hfe::io::IStream* stream);
};

void Bundle::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss(std::ios_base::out);
    ss << "animationSystem.createBundle " << getName() << std::endl;
    if (!m_looping)
        ss << "animationBundle.isLooping 0" << std::endl;
    if (m_abruptPlayback)
        ss << "animationBundle.abruptPlayback 1" << std::endl;
    if (m_playBackward)
        ss << "animationBundle.playBackward 1" << std::endl;
    if (m_fadeInTime != 0.2f)
        ss << "animationBundle.fadeInTime " << m_fadeInTime << std::endl;
    if (m_fadeOutTime != 0.1f)
        ss << "animationBundle.fadeOutTime " << m_fadeOutTime << std::endl;
    if (m_playForever)
        ss << "animationBundle.playForever 1" << std::endl;
    if (m_useSpeedAsTime)
        ss << "animationBundle.useSpeedAsTime 1" << std::endl;
    if (m_jumpToLastAnimationAtStop)
        ss << "animationBundle.jumpToLastAnimationAtStop 1" << std::endl;

    for (std::list<std::pair<float, BoneAnimation*> >::reverse_iterator it = m_bones.rbegin();
         it != m_bones.rend(); ++it) {
        std::string const& name = animationManager->getName(it->second);
        ss << "animationBundle.addAnimation " << name << std::endl;
        if (it->first > 0.0f)
            ss << "animationBundle.setAnimationStartTime " << name << " " << it->first << std::endl;
    }

    for (std::list<BundleEvent>::const_iterator it = m_events.begin(); it != m_events.end(); ++it) {
        ss << "animationBundle.addEvent " << it->m_text << std::endl;
        if (it->m_time > 0.0f)
            ss << "animationBundle.setEventStartTime " << it->m_text << " " << it->m_time << std::endl;
    }

    ss << std::endl;

    std::string str = ss.str();

    typedef unsigned int (*wfn_t)(void*, const char*, unsigned int);
    wfn_t f = *(wfn_t*)(*(char**)stream + 0x28);
    f(stream, str.data(), (unsigned int)str.size());
}

} }
