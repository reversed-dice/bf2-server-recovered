// FUNCTION: BF2 0x643b80
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <string>

namespace dice { namespace hfe {

class XMLNode;

int compareIgnoreCase(char const* a, char const* b);

class XMLAttribute {
public:
    std::string m_name;    // +0x0
    std::string m_value;   // +0x8
    XMLAttribute();
};

class XMLNode {
public:
    char _pad0[0x18];
    std::vector<XMLNode*> m_children;         // +0x18
    std::vector<XMLAttribute*> m_attributes;  // +0x30

    void setAttribute(std::string const& name, std::string const& value);
};

void XMLNode::setAttribute(std::string const& name, std::string const& value)
{
    for (unsigned int i = 0; i < m_attributes.size(); ++i) {
        if (compareIgnoreCase(m_attributes[i]->m_name.c_str(), name.c_str()) == 0) {
            m_attributes[i]->m_value = value;
            return;
        }
    }
    XMLAttribute* a = new XMLAttribute();
    a->m_name = name;
    a->m_value = value;
    m_attributes.push_back(a);
}

} }
