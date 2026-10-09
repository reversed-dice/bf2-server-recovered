// FUNCTION: BF2 0x8846d0
#include <string>

namespace dice { namespace hfe {

class CombatAreaManager {
public:
    static CombatAreaManager* m_instance;
    std::string getActiveCombatAreaName();
};

class ConsoleClass297 {
public:
    void* executeObjectMethod();
    void* pad0();
    void* pad1();
    void* pad2();
private:
    char _pad0[0x30];
    int m_argc;                 // 0x30
    char _pad1[0x108 - 0x34];
    unsigned char m_hasResult;  // 0x108
    char _pad2[0x110 - 0x109];
    std::string m_result;       // 0x110
};

void* ConsoleClass297::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(CombatAreaManager::m_instance->getActiveCombatAreaName());
    return &m_result;
}

void* ConsoleClass297::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(CombatAreaManager::m_instance->getActiveCombatAreaName());
    return &m_result;
}

void* ConsoleClass297::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(CombatAreaManager::m_instance->getActiveCombatAreaName());
    return &m_result;
}

void* ConsoleClass297::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(CombatAreaManager::m_instance->getActiveCombatAreaName());
    return &m_result;
}

} }
