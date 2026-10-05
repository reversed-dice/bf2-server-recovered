// FUNCTION: BF2 0xae5200
#include <string>
namespace dice { namespace anim {
class TriggerManager {
public:
    std::string listTriggers() const;
};
}}

namespace dice { namespace hfe { namespace animationTools {
namespace {

::dice::anim::TriggerManager* getActiveTriggerManager();

class ConsoleClass149 {
public:
    virtual ~ConsoleClass149();
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

void* ConsoleClass149::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = getActiveTriggerManager()->listTriggers();
        return &m_result;
    }
    return 0;
}

}
} } }
