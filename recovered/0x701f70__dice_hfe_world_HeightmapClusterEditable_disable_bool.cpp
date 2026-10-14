// FUNCTION: BF2 0x701f70
namespace dice { namespace hfe {

struct Vec4 { float x, y, z, w; Vec4(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; } };

class HeightmapEventNode
{
public:
    char _pad[0x40];
    HeightmapEventNode(unsigned int id);
    void setAffectedArea(Vec4 const& area);
};

class Cluster
{
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual float f78();
    virtual float f80();
    virtual float f88();
    virtual float f90();
};

class IEventManager
{
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void postEvent(unsigned int id, HeightmapEventNode* node, float delay);
};

extern IEventManager* eventManager;

namespace world {

class HeightmapClusterEditable
{
public:
    char pad0[0x28];
    Cluster* m_28;      // 0x28
    char pad1[0x45 - 0x30];
    unsigned char m_45; // 0x45

    void disable(bool v);
};

void HeightmapClusterEditable::disable(bool v)
{
    m_45 = v;
    if (v)
        return;

    if (!m_28)
        return;

    HeightmapEventNode* node = new HeightmapEventNode(0x64);

    Vec4 area(m_28->f78(), m_28->f88(), m_28->f80(), m_28->f90());

    node->setAffectedArea(area);

    eventManager->postEvent(8, node, 0.0f);
}

} } }
