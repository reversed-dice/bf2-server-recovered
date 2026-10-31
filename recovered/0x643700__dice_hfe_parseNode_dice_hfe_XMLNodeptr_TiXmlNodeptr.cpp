// FUNCTION: BF2 0x643700
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class XMLAttribute;

class TiXmlString
{
public:
    const char* c_str() const
    {
        if (allocated)
            return cstring;
        return "";
    }
private:
    char* cstring;               // +0x0
    unsigned int allocated;      // +0x8
    unsigned int current_length; // +0xc
};

class TiXmlElement;

class TiXmlNode
{
public:
    enum NodeType
    {
        DOCUMENT,
        ELEMENT,
        COMMENT,
        UNKNOWN,
        TEXT,
        DECLARATION,
        TYPECOUNT
    };

    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int Type() const;    // slot 5 -> [vptr+0x28]

    const char* Value() const { return value.c_str(); }
    TiXmlNode* FirstChild() const { return firstChild; }
    TiXmlNode* NextSibling() const { return next; }
    TiXmlElement* ToElement() const;

    char _b0[0x10];
    TiXmlNode* parent;           // +0x18
    int type;                    // +0x20
    char _b1[0x4];
    TiXmlNode* firstChild;       // +0x28
    TiXmlNode* lastChild;        // +0x30
    TiXmlString value;           // +0x38
    TiXmlNode* prev;             // +0x48
    TiXmlNode* next;             // +0x50
};

class TiXmlAttribute
{
public:
    const char* Name() const { return name.c_str(); }
    const char* Value() const { return value.c_str(); }
    TiXmlAttribute* Next() const;

    char _b0[0x18];
    void* document;              // +0x18
    TiXmlString name;            // +0x20
    TiXmlString value;           // +0x30
    TiXmlAttribute* prev;        // +0x40
    TiXmlAttribute* next;        // +0x48
};

class TiXmlAttributeSet
{
public:
    TiXmlAttribute* First() const
    {
        return (sentinel.next == &sentinel) ? 0 : sentinel.next;
    }
private:
    TiXmlAttribute sentinel;
};

class TiXmlElement : public TiXmlNode
{
public:
    TiXmlAttribute* FirstAttribute() const { return attributeSet.First(); }

    TiXmlAttributeSet attributeSet;   // +0x58
};

inline TiXmlElement* TiXmlNode::ToElement() const
{
    return (this && type == ELEMENT) ? (TiXmlElement*)this : 0;
}

class XMLAttribute {
public:
    std::string m_name;    // +0x0
    std::string m_value;   // +0x8
    XMLAttribute();
};

class XMLNode {
public:
    virtual ~XMLNode();
    std::string m_name;                       // +0x8
    std::string m_text;                       // +0x10
    std::vector<XMLNode*> m_children;         // +0x18
    std::vector<XMLAttribute*> m_attributes;  // +0x30

    XMLNode();
    void addNode(XMLNode* node);
    void addAttribute(XMLAttribute* attr);
};

void parseNode(XMLNode* node, TiXmlNode* p);

void parseNode(XMLNode* node, TiXmlNode* p)
{
    node->m_name = std::string(p->Value());

    if (p->Type() == TiXmlNode::ELEMENT) {
        for (TiXmlAttribute* a = p->ToElement()->FirstAttribute(); a != 0; a = a->Next()) {
            XMLAttribute* attr = new XMLAttribute();
            attr->m_name = std::string(a->Name());
            attr->m_value = std::string(a->Value());
            node->addAttribute(attr);
        }
    }

    for (TiXmlNode* child = p->FirstChild(); child != 0; child = child->NextSibling()) {
        switch (child->Type()) {
        case TiXmlNode::ELEMENT: {
            XMLNode* n = new XMLNode();
            node->addNode(n);
            parseNode(n, child);
            break;
        }
        case TiXmlNode::TEXT:
            node->m_text = std::string(child->Value());
            break;
        default:
            break;
        }
    }
}

} }
