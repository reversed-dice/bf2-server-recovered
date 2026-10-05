// FUNCTION: BF2 0x625210
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

class DefaultFollowCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x14];
    float m_x14;
    float m_x18;
    float m_x1c;
    float m_x20;
    float m_x24;
};

bool DefaultFollowCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    ss << "ObjectTemplate.follow.maxYaw " << m_x14 << std::endl;
    ss << "ObjectTemplate.follow.maxPitch " << m_x18 << std::endl;
    ss << "ObjectTemplate.follow.changePitch " << m_x20 << std::endl;
    ss << "ObjectTemplate.follow.changeYaw " << m_x1c << std::endl;
    ss << "ObjectTemplate.follow.minDist " << m_x24 << std::endl;
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

