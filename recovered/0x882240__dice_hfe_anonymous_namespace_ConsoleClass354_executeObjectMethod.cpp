// FUNCTION: BF2 0x882240
#include <string>

namespace dice {
namespace hfe {

class ReservedSlots {
public:
    std::string list();
};

extern ReservedSlots* reservedSlots;

namespace io {

class ConsoleClass354 {
public:
    void* executeObjectMethod();
    void* pad1();
    void* pad2();
    void* pad3();
    void* pad4();
    void* pad5();
    void* pad6();
    void* pad7();
    void* pad8();
    void* pad9();
    char _pad0[0x30];
    int m_type;
    char _pad1[0xd4];
    char m_hasArg;
    char _pad2[7];
    std::string m_result;
};

void* ConsoleClass354::pad1() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad2() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad3() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad4() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad5() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad6() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad7() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad8() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::pad9() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

void* ConsoleClass354::executeObjectMethod() {
    void* res = 0;
    if (m_type == 0) {
        m_hasArg = 1;
        m_result.assign(reservedSlots->list());
        res = &m_result;
    }
    return res;
}

} } }
