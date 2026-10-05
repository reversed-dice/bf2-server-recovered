// FUNCTION: BF2 0x6198f0
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

class ResurrectCollisionCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x14];
    bool m_x14;
    bool m_x15;
    unsigned char _pad1[0x2];
    float m_x18;
    float m_x1c;
};

bool ResurrectCollisionCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x14) {
        ss << "ObjectTemplate.collision.hasCollisionEffect " << m_x14 << std::endl;
    }
    if (m_x15) {
        ss << "ObjectTemplate.collision.bouncing " << m_x15 << std::endl;
    }
    if (m_x18 != 0.0f) {
        ss << "ObjectTemplate.collision.resurrectDamage " << m_x18 << std::endl;
    }
    if (m_x1c != 0.10000000149011612f) {
        ss << "ObjectTemplate.collision.restoreHP " << m_x1c << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

