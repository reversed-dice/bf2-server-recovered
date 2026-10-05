// FUNCTION: BF2 0x60f750
#include <sstream>
#include <string>
namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};
} } }

namespace dice { namespace hfe { namespace world {

class WeaponBasedRecoilCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x14];
    float m_x14;
    float m_x18;
    float m_x1c;
    float m_x20;
    unsigned char _pad1[0x4];
    float m_x28;
    float m_x2c;
    float m_x30;
};

bool WeaponBasedRecoilCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x20 != 0.0f) {
        ss << "ObjectTemplate.recoil.recoilSize " << m_x20 << std::endl;
    }
    if (m_x18 != 0.0f) {
        ss << "ObjectTemplate.recoil.recoilSpeed " << m_x18 << std::endl;
    }
    if (m_x28 != 0.0f) {
        ss << "ObjectTemplate.recoil.recoilSpeedGB " << m_x1c << std::endl;
    }
    if (m_x14 != 0.0f) {
        ss << "ObjectTemplate.recoil.recoilForce " << m_x14 << std::endl;
    }
    if (m_x2c != 0.0f) {
        ss << "ObjectTemplate.recoil.cameraRecoilSpeed " << m_x2c << std::endl;
    }
    if (m_x30 != 0.0f) {
        ss << "ObjectTemplate.recoil.cameraRecoilSize " << m_x30 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

