// FUNCTION: BF2 0x628eb0
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

class DefaultPenetrateCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x14];
    bool m_x14;
    bool m_x15;
};

bool DefaultPenetrateCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (!m_x14) {
        ss << "ObjectTemplate.penetrate.allowSolidPenetration " << false << std::endl;
    }
    if (!m_x15) {
        ss << "ObjectTemplate.penetrate.allowLiquidPenetration " << false << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

