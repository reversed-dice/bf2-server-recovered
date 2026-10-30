// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x73bc80
#include <string>

namespace dice { namespace hfe {

struct Vec4 {
    float x, y, z, w;
    Vec4() {}
    Vec4(float a, float b, float c, float d) : x(a), y(b), z(c), w(d) {}
};

class IDebugGraph {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void set(Vec4 const& v);          // +0x20
    virtual void v5();
    virtual void v6();
    virtual void v7(float, float);            // +0x38
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15(int);                    // +0x78
    virtual void v16(float);                  // +0x80
    virtual void setColour(int, int, int);    // +0x88
    virtual void v18();
    virtual void v19();
    virtual void v20(int);                    // +0xa0
};

class IDebugRenderer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(IDebugGraph*);            // +0x20
};

class RendererClass {
public:
    virtual void r0();
    virtual void r1();
    virtual void r2();
    virtual void r3();
    virtual void r4();
    virtual void r5();
    virtual void r6();
    virtual void r7();
    virtual IDebugGraph* getGraph();          // +0x40
};

class ClassManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void* getSingleton(std::string const&);   // +0x98
};

extern ClassManager* classManager;

class DebugCounterManager {
public:
    char _pad0x0[0x10];
    int m_10;
    bool m_14;
    int m_18;
    int m_1c;
    int m_20;
    int m_24;
    std::string m_28;
    IDebugGraph* m_30;
    IDebugRenderer* m_38;
    std::string m_40;
    int m_48;
    int m_4c;
    int m_50;
    int m_54;
    int m_58;
    int m_5c;
    int m_60;
    int m_64;
    char* m_68;
    void graphEnable(std::string const& name);
};

void DebugCounterManager::graphEnable(std::string const& name)
{
    {
    m_28 = name;
    if (!m_30) {
        RendererClass* r = (RendererClass*)classManager->getSingleton(std::string("DebugRenderer"));
        if (r)
            m_30 = r->getGraph();
    }
        if (!m_30) {
            m_28.assign("", 0);
            return;
        }
    }
    m_30->set(Vec4(m_4c, m_50, m_54, m_58));
    m_30->v15(m_54);
    m_30->v20(0);
    m_30->v7((float)m_5c, (float)m_60);
    {
    int col = m_18 - 0x1000000;
    m_30->setColour(col, col, col);
    m_30->v16(0.0f);
    if (!m_38) {
        m_38 = (IDebugRenderer*)classManager->getSingleton(std::string("DebugLineGraphRenderer"));
    }
        if (!m_38)
            return;
    }
    m_38->v4(m_30);
}

} }
