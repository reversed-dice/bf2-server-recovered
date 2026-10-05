// FUNCTION: BF2 0x57ee50
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

class FreeCameraTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x1f8];
    float m_x1f8;
    float m_x1fc;
};

bool FreeCameraTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    ss << "ObjectTemplate.worldFOV " << m_x1f8 << std::endl;
    ss << "ObjectTemplate.insideFOV " << m_x1fc << std::endl;
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

