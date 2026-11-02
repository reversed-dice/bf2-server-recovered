// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6b5c20
#include <sstream>
#include <string>
#include <ostream>

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

class BoneAnimation {
public:
    char _pad0[0x1];
    char m_looping;                // +0x1
    char _pad1[0x2];               // +0x2
    float m_lengthA;               // +0x4
    float m_length;                // +0x8
    char _pad2[0x4];               // +0xc
    float m_fadeInTime;            // +0x10
    char _pad3[0x10];              // +0x14
    int m_ignoreMotherOrientation; // +0x24
    char _pad4[0x30];              // +0x28
    int m_noiceFreq;               // +0x58
    float m_noiceAmplitude;        // +0x5c

    void makeScript(dice::hfe::io::IStream* stream);
};

void BoneAnimation::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss(std::ios_base::out);
    ss << "animationSystem.createAnimation " << animationManager->getName(this) << std::endl;
    if (!m_looping)
        ss << "animationManager.looping 0" << std::endl;
    if (m_ignoreMotherOrientation >= 0)
        ss << "animationManager.ignoreMotherOrientation " << m_ignoreMotherOrientation << std::endl;
    if ((float)m_noiceFreq > 0.0f) {
        ss << "animationManager.noiceFreq " << m_noiceFreq << std::endl;
        ss << "animationManager.noiceAmplitude " << m_noiceAmplitude << std::endl;
    }
    if (m_lengthA != m_length)
        ss << "animationManager.length " << m_length << std::endl;
    if (m_fadeInTime != 0.0f)
        ss << "animationManager.fadeInTime " << m_fadeInTime << std::endl;
    std::string str = ss.str();
    typedef unsigned int (*wfn_t)(void*, const char*, unsigned int);
    wfn_t f = *(wfn_t*)(*(char**)stream + 0x28);
    f(stream, str.data(), (unsigned int)str.size());
}

} }
