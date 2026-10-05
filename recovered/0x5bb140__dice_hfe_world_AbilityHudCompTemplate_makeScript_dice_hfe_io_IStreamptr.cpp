// FUNCTION: BF2 0x5bb140
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

class AbilityHudCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x18];
    std::string m_x18;
    std::string m_x20;
    std::string m_x28;
};

bool AbilityHudCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x20.length() != 0) {
        ss << "ObjectTemplate.AbilityHud.repairingSound " << m_x20 << std::endl;
    }
    if (m_x28.length() != 0) {
        ss << "ObjectTemplate.AbilityHud.ammoSound " << m_x28 << std::endl;
    }
    if (m_x18.length() != 0) {
        ss << "ObjectTemplate.AbilityHud.healingSound " << m_x18 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

