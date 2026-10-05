// FUNCTION: BF2 0x5448b0
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
class BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {
enum RemoteControlledObjectType { RemoteControlledObjectType_0 };
std::ostream& operator<<(std::ostream& os, RemoteControlledObjectType v);
} } }

namespace dice { namespace hfe { namespace world {

class RemoteControlledObjectTemplate : public ::dice::hfe::world::BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x1f8];
    RemoteControlledObjectType m_x1f8;
    float m_x1fc;
};

bool RemoteControlledObjectTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!BundleTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    if (m_x1f8 != 0) {
        ss << "ObjectTemplate.rcType " << m_x1f8 << std::endl;
    }
    if (m_x1fc != 0.0f) {
        ss << "ObjectTemplate.minTimeBetweenActivation " << m_x1fc << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

