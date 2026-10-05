// FUNCTION: BF2 0x5ae920
// BF2_FLAGS: -fno-strict-aliasing
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

class AbilityGLCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x18];
    bool m_x18;
    bool m_x19;
    bool m_x1a;
    unsigned char _pad1[0x1];
    int m_x1c;
};

bool AbilityGLCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x18) {
        ss << "ObjectTemplate.Ability.hasHealingAbility " << m_x18 << std::endl;
    }
    if (m_x19) {
        ss << "ObjectTemplate.Ability.hasRepairingAbility " << m_x19 << std::endl;
    }
    if (m_x1a) {
        ss << "ObjectTemplate.Ability.hasAmmoAbility " << m_x1a << std::endl;
    }
    if (m_x1c != 0) {
        ss << "ObjectTemplate.Ability.radarRadius " << m_x1c << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

