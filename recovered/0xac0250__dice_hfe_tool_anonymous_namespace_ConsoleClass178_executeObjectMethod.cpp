// FUNCTION: BF2 0xac0250
#include <string>

namespace dice { namespace hfe { namespace tool {
class ObjectTemplateAdm { public: bool saveAllSpawners(); };
extern ObjectTemplateAdm objectTemplateAdm;
} } }
namespace dice { namespace hfe { namespace tool {
struct ConsoleClass178 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    bool m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* pad3();
    void* executeObjectMethod();
};
void* ConsoleClass178::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllSpawners();
    return &m_result;
}
void* ConsoleClass178::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllSpawners();
    return &m_result;
}
void* ConsoleClass178::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllSpawners();
    return &m_result;
}
void* ConsoleClass178::pad3() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllSpawners();
    return &m_result;
}
void* ConsoleClass178::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.saveAllSpawners();
    return &m_result;
}

}
}
}
