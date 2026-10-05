// FUNCTION: BF2 0x620040
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
class DefaultDetonationCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {
enum ReplenishingType { ReplenishingType_0 };
std::ostream& operator<<(std::ostream& os, ReplenishingType v);
} } }

namespace dice { namespace hfe { namespace world {

class ReplenishDetonationCompTemplate : public ::dice::hfe::world::DefaultDetonationCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x104];
    float m_x104;
    ReplenishingType m_x108;
};

bool ReplenishDetonationCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!DefaultDetonationCompTemplate::makeScript(stream))
        return false;
    std::ostringstream ss;
    ss << "ObjectTemplate.detonation.replenishingType " << m_x108 << std::endl;
    if (m_x104 != 0.0f) {
        ss << "ObjectTemplate.detonation.replenishingStrength " << m_x104 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

