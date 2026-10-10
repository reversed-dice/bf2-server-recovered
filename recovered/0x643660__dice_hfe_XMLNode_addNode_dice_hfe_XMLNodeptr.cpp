// FUNCTION: BF2 0x643660
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <string>

namespace dice { namespace hfe {

class XMLNode;
class XMLAttribute;

int compareIgnoreCase(char const* a, char const* b);

class XMLAttribute {
public:
    char* m_name;          // +0x0
    std::string m_value;   // +0x8
};

class XMLNode {
public:
    char _pad0[0x18];
    std::vector<XMLNode*> m_children;         // +0x18
    std::vector<XMLAttribute*> m_attributes;  // +0x30

    bool addNode(XMLNode* node);
    bool addAttribute(XMLAttribute* attr);
    std::string getAttribute(std::string const& name) const;
};

bool XMLNode::addNode(XMLNode* node)
{
    if (node == 0)
        return false;
    m_children.push_back(node);
    return true;
}

bool XMLNode::addAttribute(XMLAttribute* attr)
{
    if (attr == 0)
        return false;
    m_attributes.push_back(attr);
    return true;
}

std::string XMLNode::getAttribute(std::string const& name) const
{
    for (unsigned int i = 0; i < m_attributes.size(); ++i) {
        XMLAttribute* a = m_attributes[i];
        if (compareIgnoreCase(a->m_name, name.c_str()) == 0)
            return a->m_value;
    }
    return std::string("");
}

} }
