// FUNCTION: BF2 0x58fc70
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
class SimpleObjectTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {
class EffectProperties {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
};
} } }

namespace dice { namespace hfe { namespace world {

class AirDraftEffectBundleTemplate : public ::dice::hfe::world::SimpleObjectTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x1c8];
    EffectProperties m_sub1c8;
    unsigned char _pad1[0x15f];
    std::string m_x328;
    float m_x330;
    float m_x334;
    float m_x338;
    bool m_x33c;
};

bool AirDraftEffectBundleTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    if (!SimpleObjectTemplate::makeScript(stream))
        return false;
    if (!m_sub1c8.makeScript(stream))
        return false;
    std::ostringstream ss;
    ss << "ObjectTemplate.maxDistance " << m_x338 << std::endl;
    ss << "ObjectTemplate.startDistance " << m_x334 << std::endl;
    ss << "ObjectTemplate.engineInfluence " << m_x330 << std::endl;
    ss << "ObjectTemplate.alignEffectTransformation " << m_x33c << std::endl;
    ss << "ObjectTemplate.engineName " << m_x328 << std::endl;
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

