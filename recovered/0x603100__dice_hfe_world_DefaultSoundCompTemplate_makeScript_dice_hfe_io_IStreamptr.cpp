// FUNCTION: BF2 0x603100
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

class DefaultSoundCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x14];
    bool m_x14;
    unsigned char _pad1[0x3];
    int m_x18;
};

bool DefaultSoundCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (!m_x14) {
        ss << "ObjectTemplate.sound.noisy " << false << std::endl;
    }
    if (m_x18 != -1) {
        ss << "ObjectTemplate.sound.maxSoundsPerBurst " << m_x18 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

