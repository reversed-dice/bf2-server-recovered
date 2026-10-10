// FUNCTION: BF2 0xae4c40
#include <string>

namespace dice { namespace anim {
class ValueHolderManager {
public:
    std::string listValueHolders() const;
};
extern ValueHolderManager* valueHolderManager;
}}

namespace dice { namespace hfe { namespace animationTools {

struct ConsoleClass155 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[7];
    std::string m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* pad3();
    void* pad4();
    void* pad5();
    void* pad6();
    void* pad7();    void* executeObjectMethod();
};
void* ConsoleClass155::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::pad3() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::pad4() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::pad5() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::pad6() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::pad7() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
void* ConsoleClass155::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = dice::anim::valueHolderManager->listValueHolders();
    return &m_result;
}
}
}
}
