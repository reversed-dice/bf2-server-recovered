// FUNCTION: BF2 0x95d180
#include <string>
namespace dice { namespace hfe { namespace world {

class ObjectTemplate {
public:
    unsigned char _pad0[0x268];
    std::string m_value;
    unsigned char _pad1[0x278 - 0x270];
    void* m_cached;
    const std::string& getValue() const { return m_value; }
    void setValue(const std::string& v) { m_value = v; m_cached = 0; }
};

ObjectTemplate* getActiveTemplate(unsigned int classId);
extern unsigned int classId0x95d180;

namespace {

class ConsoleClass324 {
public:
    virtual ~ConsoleClass324();
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

void* ConsoleClass324::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = getActiveTemplate(classId0x95d180)->getValue();
        return &m_result;
    }
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        getActiveTemplate(classId0x95d180)->setValue(a);
    }
    return 0;
}

}
} } }
