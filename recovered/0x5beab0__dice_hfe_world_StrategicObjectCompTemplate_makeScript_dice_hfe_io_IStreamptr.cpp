// FUNCTION: BF2 0x5beab0
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

class StrategicObjectCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream* stream);
    unsigned char _pad0[0x18];
    std::string m_x18;
    int m_x20;
    unsigned char _pad1[0x4];
    std::string m_x28;
    std::string m_x30;
    unsigned char _pad2[0x8];
    int m_x40;
    bool m_x44;
};

bool StrategicObjectCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (m_x18.length() != 0) {
        ss << "ObjectTemplate.StrategicObject.strategicObjectName " << m_x18 << std::endl;
    }
    if (m_x28.length() != 0) {
        ss << "ObjectTemplate.StrategicObject.destroyedIcon " << m_x28 << std::endl;
    }
    if (m_x30.length() != 0) {
        ss << "ObjectTemplate.StrategicObject.intactIcon " << m_x30 << std::endl;
    }
    if (m_x20 != 0) {
        ss << "ObjectTemplate.StrategicObject.part " << m_x20 << std::endl;
    }
    if (m_x40 != -1) {
        ss << "ObjectTemplate.StrategicObject.3dMapIcon " << m_x40 << std::endl;
    }
    if (m_x44) {
        ss << "ObjectTemplate.StrategicObject.isOnePiece " << m_x44 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }

