// FUNCTION: BF2 0x952400
#include <string>
namespace dice { namespace hfe { namespace world {

class ObjectTemplate {
public:
    unsigned char _pad0[0x60];
    std::string m_value;
        void* m_cached;
    const std::string& getValue() const { return m_value; }
    void setValue(const std::string& v) { m_value = v; m_cached = 0; }
};

ObjectTemplate* getActiveTemplateComponent(unsigned int a, unsigned int b);
extern unsigned int idA0x952400;
extern unsigned int idB0x952400;

namespace {

class ConsoleClass540 {
public:
    virtual ~ConsoleClass540();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
    unsigned char _pad3[0x110 - 0x109];
    std::string m_result;
};

void* ConsoleClass540::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = getActiveTemplateComponent(idA0x952400, idB0x952400)->getValue();
        return &m_result;
    }
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        getActiveTemplateComponent(idA0x952400, idB0x952400)->setValue(a);
    }
    return 0;
}

}
} } }
