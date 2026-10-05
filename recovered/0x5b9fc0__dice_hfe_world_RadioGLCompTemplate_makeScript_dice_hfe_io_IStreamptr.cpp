// FUNCTION: BF2 0x5b9fc0
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

class RadioGLCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x18];
    std::string m_x18;
    std::string m_x20;
    std::string m_x28;
    std::string m_x30;
    std::string m_x38;
};

bool RadioGLCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x18.length() != 0) {
        ss << "ObjectTemplate.Radio.failMessage " << m_x18 << std::endl;
    }
    if (m_x20.length() != 0) {
        ss << "ObjectTemplate.Radio.useMessage " << m_x20 << std::endl;
    }
    if (m_x28.length() != 0) {
        ss << "ObjectTemplate.Radio.destroyedMessage " << m_x28 << std::endl;
    }
    if (m_x30.length() != 0) {
        ss << "ObjectTemplate.Radio.repairedMessage " << m_x30 << std::endl;
    }
    if (m_x38.length() != 0) {
        ss << "ObjectTemplate.Radio.spottedMessage " << m_x38 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

