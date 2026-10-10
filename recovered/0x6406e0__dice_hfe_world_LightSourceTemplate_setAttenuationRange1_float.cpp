// FUNCTION: BF2 0x6406e0
#include <ostream>
#include <string>

namespace dice { namespace hfe {

enum DebugType { DEBUG_WARNING = 6, DEBUG_ASSERT = 7 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

namespace world {

class LightSourceTemplate {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual std::string const& getName() const;
    void setAttenuationRange1(float v);
private:
    char _pad0[0x90];
    float m_atten1;
    float m_atten2;
    char _pad1[0x28];
    float m_cone1;
    float m_cone2;
    float m_fov;
};

void LightSourceTemplate::setAttenuationRange1(float v)
{
    if (v > 100.0f) {
        Debug(DEBUG_WARNING, std::string("Game/Objects/Visual/LightSourceTemplate.cpp"), 198, std::string(""))
            .stream() << "Light " << getName() << " attenuation1 >100, capped to 100.";
        v = 100.0f;
    }
    m_atten1 = v;
}

} }
}
