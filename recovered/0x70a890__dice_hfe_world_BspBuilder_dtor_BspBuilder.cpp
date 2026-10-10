// FUNCTION: BF2 0x70a890
#include <vector>

struct BspBuilderNode;

class BspBuilderElement {
public:
    ~BspBuilderElement() {}
    char m_data[0x28];
};

class BspBuilder {
public:
    ~BspBuilder();
    void deleteNode(BspBuilderNode*);
private:
    char m_pad0[0x8];
    void* m_p0x8;
    BspBuilderNode* m_p0x10;
    std::vector<BspBuilderElement> m_elems;
    void* m_p0x30;
};

BspBuilder::~BspBuilder()
{
    operator delete(m_p0x8);
    deleteNode(m_p0x10);
    if (m_p0x30) operator delete(m_p0x30);
}
