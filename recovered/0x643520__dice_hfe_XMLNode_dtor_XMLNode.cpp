// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x643520
#include <string>
#include <vector>
namespace dice { namespace hfe {

class IBase {
public:
    virtual void v0();
    virtual void release();
};

class XMLAttribute {
public:
    ~XMLAttribute();
};

class XMLNode {
public:
    virtual ~XMLNode();
    std::string m_0x8;
    std::string m_0x10;
    std::vector<IBase*> m_0x18;
    std::vector<XMLAttribute*> m_0x30;
};

XMLNode::~XMLNode()
{
    for (unsigned int i = 0; i < m_0x18.size(); ++i) {
        if (m_0x18[i] != 0)
            m_0x18[i]->release();
    }
    for (unsigned int i = 0; i < m_0x30.size(); ++i) {
        delete m_0x30[i];
    }
}

} }
