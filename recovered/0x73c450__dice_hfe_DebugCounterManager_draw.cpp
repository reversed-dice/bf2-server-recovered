// FUNCTION: BF2 0x73c450
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class ClassManager {
public:
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void* getSingleton(std::string const& name);   // +0x98 slot 19
};

extern ClassManager* classManager;

std::string formatString(char const* fmt, ...);

struct Vec4 {
    float x, y, z, w;
    Vec4() {}
    Vec4(float a, float b, float c, float d) : x(a), y(b), z(c), w(d) {}
};

class IDebugGraph {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void set(Vec4 const& v);          // +0x20
    virtual void v5(); virtual void v6();
    virtual void v7(float, float);            // +0x38
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(int);                    // +0x78
    virtual void v16(float);                  // +0x80
    virtual void setColour(int, int, int);    // +0x88
};

class IBFDebugTextWriterFixed {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void setColor(int color);                                     // +0x40
    virtual void d9();                                                    // +0x48
    virtual void drawScreenText(int x, int y, std::vector<std::string> const& lines,
                                int font, int alignX, int alignY);        // +0x50
};

class DebugCounter {
public:
    virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3();
    virtual void n4(char* text);
};

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
    void* m_38;
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
    float getValueFromFunction();
    void draw();
    static std::vector<DebugCounter*> m_counterVec;
    static std::vector<std::string> m_text;
    static int m_lastPhysicsUpdate;
    static int m_physicsUpdates;
};

void DebugCounterManager::draw()
{
    if (!m_14)
        return;

    IBFDebugTextWriterFixed* w = (IBFDebugTextWriterFixed*)classManager->getSingleton(std::string("DebugTextWriterFixed"));
    if (w)
    {
        int n = (int)m_counterVec.size();
        m_text.reserve(n);
        m_text.push_back(formatString("%-30s %10s %10s", "Tag", "This frame", "Average"));
        for (int i = 0; i < n; ++i)
        {
            DebugCounter* dc = m_counterVec[i];
            if (dc)
            {
                dc->n3();
                dc->n4(m_68);
                m_text.push_back(m_68);
            }
        }
        w->setColor(m_18);
        w->drawScreenText(m_1c, m_20, m_text, m_24, 0, 0);
        m_text.resize(0);
    }
    if (m_28.compare("") != 0 && m_38 != 0 && m_30 != 0)
    {
        m_30->v16(getValueFromFunction());
        int x = (m_counterVec.size() + 1) * (m_24 + 12);
        if (m_48 != x)
        {
            m_48 = x;
            m_30->set(Vec4((float)m_4c, (float)(m_50 + m_48), (float)m_54, (float)m_58));
        }
    }
    if (m_physicsUpdates > m_lastPhysicsUpdate)
    {
        int n = (int)m_counterVec.size();
        for (int i = 0; i < n; ++i)
        {
            DebugCounter* dc = m_counterVec[i];
            if (dc)
                dc->n1();
        }
    }
}

} }
