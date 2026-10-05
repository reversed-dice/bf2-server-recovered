// FUNCTION: BF2 0x5f2890
#include <sstream>
#include <string>
namespace dice { namespace hfe {

namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};
}

namespace world {

class TargetDeviationCompTemplate {
public:
    bool makeScript(io::IStream* stream);
    unsigned char _pad[0x28];
    float m_radius;
};

bool TargetDeviationCompTemplate::makeScript(io::IStream* stream)
{
    std::ostringstream ss(std::ios_base::out);
    if (m_radius != 0.0f)
        ss << "ObjectTemplate.deviation.radius " << m_radius << std::endl;
    std::string s = ss.str();
    return stream->write(s.data(), s.length()) == s.length();
}

} } }
