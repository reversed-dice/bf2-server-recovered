// FUNCTION: BF2 0x607e30
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

class IObject;
class IObjectTemplate;

class TargetCompTemplate {
public:
    virtual void addRef(); virtual void getRef(); virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void getInterfaceID(); virtual void createComponent();
    virtual void objectCreated(IObject*);
    virtual void objectDestroyed(IObject*);
    virtual void setTemplate(IObjectTemplate*);
    virtual void queryImplementation(unsigned int);
    bool makeScript(dice::hfe::io::IStream*);
};

class SimpleTargetCompTemplate : public TargetCompTemplate {
public:
    bool makeScript(dice::hfe::io::IStream*);
    unsigned char _pad0[0x54];
    bool m_x5c;
    float m_x60;
    float m_x64;
    float m_x68;
};

bool TargetCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    return true;
}

bool SimpleTargetCompTemplate::makeScript(dice::hfe::io::IStream* stream)
{
    std::ostringstream ss;
    if (!TargetCompTemplate::makeScript(stream)) {
        return false;
    }
    if (m_x5c) {
        ss << "ObjectTemplate.target.useDynamicVelocity " << m_x5c << std::endl;
        ss << "ObjectTemplate.target.minVelocity " << (double)m_x60 << std::endl;
        ss << "ObjectTemplate.target.maxVelocity " << (double)m_x64 << std::endl;
        ss << "ObjectTemplate.target.velocityModifier " << (double)m_x68 << std::endl;
    }
    std::string s = ss.str();
    return stream->write(s.c_str(), s.length()) == s.length();
}

} } }
