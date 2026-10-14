// FUNCTION: BF2 0x70afd0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {

struct Stat {
    unsigned int min;
    unsigned int max;
    unsigned int sum;
    unsigned int count;
    void add(unsigned int v) {
        sum += v;
        if (v > max) max = v;
        if (v < min) min = v;
        ++count;
    }
};

class BspBuilderNode {
public:
    char _pad0[0x18];
    std::vector<void*> m_faces;
};

class BspBuilder {
public:
    char _pad0[0x64];
    Stat m_a;
    Stat m_b;
    unsigned int m_nodeCount;
    unsigned int m_emptyCount;
    unsigned int m_leafTemplates;
    void createLeaf(BspBuilderNode const& node, unsigned int x);
};

void BspBuilder::createLeaf(BspBuilderNode const& node, unsigned int x)
{
    ++m_nodeCount;
    if (node.m_faces.size() != 0) {
        unsigned int count = node.m_faces.size();
        m_a.add(count);
        m_b.add(x);
        m_leafTemplates += node.m_faces.size();
    } else {
        ++m_emptyCount;
    }
}

}}}
