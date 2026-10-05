// FUNCTION: BF2 0x621950
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
enum TargetType { TargetType_0 };
std::ostream& operator<<(std::ostream& os, TargetType v);
} } }

namespace dice { namespace hfe { namespace world {

class FixedTargetCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x14];
    TargetType m_x14;
    float m_x18;
};

bool FixedTargetCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    ss << "ObjectTemplate.seek.targetType " << m_x14 << std::endl;
    ss << "ObjectTemplate.seek.trackingDelay " << m_x18 << std::endl;
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

