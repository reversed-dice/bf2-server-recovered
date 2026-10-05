// FUNCTION: BF2 0xa47d10
#include <string>
namespace dice { namespace hfe { namespace world {

class ActiveTemplate0xa47d10 {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void setValue(std::string s);
    virtual const std::string& getValue() const;
};

ActiveTemplate0xa47d10* getActiveTemplateComponent(unsigned int classId);
extern unsigned int classId0xa47d10;

namespace {

class ConsoleClass165 {
public:
    virtual ~ConsoleClass165();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[0x4];
    const std::string* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
    unsigned char _pad3[0x110 - 0x109];
    std::string m_result;
};

void* ConsoleClass165::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = getActiveTemplateComponent(classId0xa47d10)->getValue();
        return &m_result;
    }
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        getActiveTemplateComponent(classId0xa47d10)->setValue(a);
    }
    return 0;
}

}
} } }
