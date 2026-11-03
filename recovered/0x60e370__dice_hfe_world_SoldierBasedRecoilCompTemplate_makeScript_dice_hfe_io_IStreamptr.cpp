// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x60e370
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace hfe {

class RandomDistribution {
public:
    int m_type;
    float m_a;
    float m_b;
    bool m_randomSign;
    unsigned char m_pad[8];
};

std::ostream& operator<<(std::ostream& os, RandomDistribution& rd);

namespace world {

class RecoilCompTemplate {
public:
    unsigned char m_pad0[0x18];
    RandomDistribution m_recoilForceUp;             // 0x18
    RandomDistribution m_recoilForceLeftRight;      // 0x30
    bool m_hasRecoilForce;                          // 0x48
    bool m_goBackOnRecoil;                          // 0x49
    unsigned char m_pad1[2];
    float m_zoomModifier;                           // 0x4c
    int m_recoilGraphFrameCount;                    // 0x50
    float m_recoilGraphExponent;                    // 0x54
    float m_recoilGraphTotalMovement;               // 0x58
};

class SoldierBasedRecoilCompTemplate : public RecoilCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};

bool SoldierBasedRecoilCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_hasRecoilForce) {
        ss << "ObjectTemplate.recoil.hasRecoilForce 1" << std::endl;
        if (!m_goBackOnRecoil) {
            ss << "ObjectTemplate.recoil.goBackOnRecoil 0" << std::endl;
        }
        {
            RandomDistribution* d = &m_recoilForceUp;
            if (d->m_type != 0 || d->m_a != 1.0f)
                ss << "ObjectTemplate.recoil.recoilForceUp " << *d << std::endl;
        }
        {
            RandomDistribution* d = &m_recoilForceLeftRight;
            if (d->m_type != 0 || d->m_a != 0.0f)
                ss << "ObjectTemplate.recoil.recoilForceLeftRight " << *d << std::endl;
        }
        if (m_zoomModifier != 1.0f) {
            ss << "ObjectTemplate.recoil.zoomModifier " << m_zoomModifier << std::endl;
        }
        if (m_recoilGraphFrameCount != 8) {
            ss << "ObjectTemplate.recoil.recoilGraphFrameCount " << m_recoilGraphFrameCount << std::endl;
        }
        if (m_recoilGraphExponent != 2.0f) {
            ss << "ObjectTemplate.recoil.recoilGraphExponent " << m_recoilGraphExponent << std::endl;
        }
        if (m_recoilGraphTotalMovement != 2.0f) {
            ss << "ObjectTemplate.recoil.recoilGraphTotalMovement " << m_recoilGraphTotalMovement << std::endl;
        }
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
