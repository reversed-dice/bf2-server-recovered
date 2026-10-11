// FUNCTION: BF2 0x63f000
#include <string>
#include <ostream>

namespace dice { namespace hfe {

enum DebugType { DEBUG_T0, DEBUG_T1, DEBUG_T2, DEBUG_T3, DEBUG_T4, DEBUG_T5, DEBUG_WARNING };

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

class Object {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual std::string const& getName() const;
};

class LightSource : public Object {
public:
    void setConeAngle2(float v);
private:
    char _pad0[0x25c];
    float m_cone2;
    char _pad1[0x208];
    bool m_hasAttenuation;
};

} // world
} } // dice::hfe

void dice::hfe::world::LightSource::setConeAngle2(float v)
{
    if (v > 180.0f) {
        Debug(DEBUG_WARNING, std::string("Game/Objects/Visual/LightSource.cpp"), 360, std::string(""))
            .stream() << "Light " << getName() << " coneAngle2>180, capped to 180.";
        v = 180.0f;
    }
    m_cone2 = v;
    m_hasAttenuation = true;
}
