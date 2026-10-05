// FUNCTION: BF2 0x943960
#include <string>
namespace dice { namespace hfe { namespace world {

class ObjectTemplate {
public:
    unsigned char _pad0[0x208];
    std::string m_value;
    std::string getValue() const { return m_value; }
    void setValue(std::string v) { m_value = v; }
};

ObjectTemplate* getActiveTemplate(unsigned int classId);
extern unsigned int classId0x943960;

namespace {

class ConsoleClass1193 {
public:
    virtual ~ConsoleClass1193();
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

void* ConsoleClass1193::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = getActiveTemplate(classId0x943960)->getValue();
        return &m_result;
    }
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        getActiveTemplate(classId0x943960)->setValue(a);
    }
    return 0;
}

}
} } }
