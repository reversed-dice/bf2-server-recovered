// FUNCTION: BF2 0x70f670
#include <vector>

namespace dice { namespace hfe { namespace world {

struct BspLeaf {
    char _pad[0x18];
    ~BspLeaf() {}
};

struct BspNode {
    char _pad[0x10];
    ~BspNode() {}
};

class BspV8 {
public:
    ~BspV8();
    std::vector<BspLeaf> m_leaves;
    char _pad18[0x18];
    std::vector<BspNode> m_nodes;
    void* m_48;
};

BspV8::~BspV8()
{
    if (m_48 != 0)
        delete m_48;
}

} } }
