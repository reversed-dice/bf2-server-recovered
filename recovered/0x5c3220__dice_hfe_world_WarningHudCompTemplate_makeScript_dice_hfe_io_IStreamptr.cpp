// FUNCTION: BF2 0x5c3220
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

class WarningHudCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x28];
    std::string m_x28;
    std::string m_x30;
    int m_x38;
    unsigned char _pad1[0x4];
    std::string m_x40;
};

bool WarningHudCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x38 != 1) {
        ss << "ObjectTemplate.WarningHud.warningType " << m_x38 << std::endl;
    }
    if (m_x28.length() != 0) {
        ss << "ObjectTemplate.WarningHud.firstWarningSound " << m_x28 << std::endl;
    }
    if (m_x30.length() != 0) {
        ss << "ObjectTemplate.WarningHud.secondWarningSound " << m_x30 << std::endl;
    }
    if (m_x40.length() != 0) {
        ss << "ObjectTemplate.WarningHud.warningIcon " << m_x40 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

