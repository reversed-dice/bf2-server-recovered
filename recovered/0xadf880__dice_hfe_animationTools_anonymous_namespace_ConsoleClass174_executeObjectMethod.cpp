// FUNCTION: BF2 0xadf880
#include <string>

namespace dice { namespace anim {
class ValueHolderManager {
public:
    std::string const& getFilename() const;
};
extern ValueHolderManager* valueHolderManager;
}}

namespace dice { namespace hfe { namespace animationTools {

struct ConsoleClass174 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[7];
    std::string m_result;
    void* pad0();
    void* pad1();    void* executeObjectMethod();
};
void* ConsoleClass174::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(dice::anim::valueHolderManager->getFilename());
    return &m_result;
}
void* ConsoleClass174::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(dice::anim::valueHolderManager->getFilename());
    return &m_result;
}
void* ConsoleClass174::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(dice::anim::valueHolderManager->getFilename());
    return &m_result;
}
}
}
}
