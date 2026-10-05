// FUNCTION: BF2 0x560320
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
class BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {
enum TargetType { TargetType_0 };
std::ostream& operator<<(std::ostream& os, TargetType v);
} } }

namespace dice { namespace hfe { namespace world {

class TargetObjectTemplate : public ::dice::hfe::world::BundleTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x1f4];
    TargetType m_x1f4;
    float m_x1f8;
    unsigned char _pad1[0x4];
    bool m_x200;
    bool m_x201;
    unsigned char _pad2[0x2];
    float m_x204;
};

bool TargetObjectTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!BundleTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    ss << "ObjectTemplate.timeToLive " << m_x1f8 << std::endl;
    ss << "ObjectTemplate.targetType " << m_x1f4 << std::endl;
    if (m_x201) {
        ss << "ObjectTemplate.disableWhenEmptyVehicle " << m_x201 << std::endl;
        if (m_x204 != 0.0f) {
            ss << "ObjectTemplate.disableWhenEmptyVehicleDelay " << m_x204 << std::endl;
        }
    }
    if (m_x200) {
        ss << "ObjectTemplate.disableWhenWreck " << m_x200 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

