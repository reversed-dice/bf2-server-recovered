// FUNCTION: BF2 0x7068a0
#include <string.h>

namespace dice { namespace hfe {

struct Vec4 { float x, y, z, w; Vec4(float a, float b, float c, float d) { x = a; y = b; z = c; w = d; } };

class HeightmapEventNode
{
public:
    char _pad[0x40];
    HeightmapEventNode(unsigned int id);
    void setAffectedArea(Vec4 const& area);
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

class Heightmap
{
public:
    void createQuadTree(int size);
};

class HeightmapEditable : public Heightmap
{
public:
    char pad0[0x18];
    void* m_18;         // 0x18 height data
    char pad1[0x28 - 0x20];
    int m_28;           // 0x28
    int m_2c;           // 0x2c
    int m_30;           // 0x30
    int m_34;           // 0x34
    int m_38;           // 0x38

    void setHeightData(void* src);
};

void HeightmapEditable::setHeightData(void* src)
{
    if (m_18)
        delete[] m_18;

    int n = m_28 * m_2c * m_30 / 8;

    void* p = new unsigned char[n];
    m_18 = p;
    memcpy(p, src, n);

    createQuadTree(m_28);

    HeightmapEventNode* node = new HeightmapEventNode(0x64);

    Vec4 area((float)(1 - m_34), (float)(1 - m_38), (float)(m_34 - 1), (float)(m_38 - 1));

    node->setAffectedArea(area);

    eventManager->postEvent(8, node, 0.0f);
}

} } }
