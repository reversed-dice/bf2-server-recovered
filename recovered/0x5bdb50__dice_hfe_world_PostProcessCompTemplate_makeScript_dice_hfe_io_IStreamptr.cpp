// FUNCTION: BF2 0x5bdb50
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

class PostProcessCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x28];
    float m_x28;
    float m_x2c;
    float m_x30;
    float m_x34;
};

bool PostProcessCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x28 != 0.05000000074505806f) {
        ss << "ObjectTemplate.postProcess.tvInterference " << m_x28 << std::endl;
    }
    if (m_x2c != 0.10000000149011612f) {
        ss << "ObjectTemplate.postProcess.tvDistortionRoll " << m_x2c << std::endl;
    }
    if (m_x30 != 0.5f) {
        ss << "ObjectTemplate.postProcess.tvDistortionFreq " << m_x30 << std::endl;
    }
    if (m_x34 != 0.5f) {
        ss << "ObjectTemplate.postProcess.tvDistortionScale " << m_x34 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

