// FUNCTION: BF2 0xae58e0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice {
namespace anim {
class Trigger;
class TriggerManager {
public:
    Trigger* createTrigger(const std::string& a, const std::string& b);
};
}
namespace hfe { namespace animationTools {
namespace {

anim::TriggerManager* getActiveTriggerManager();

class ConsoleClass143 {
public:
    virtual ~ConsoleClass143();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    const std::string* m_arg1;
    unsigned char _pad2[0x108 - 0x48];
    bool m_hasResult;
    unsigned char _pad3[0x110 - 0x109];
    anim::Trigger* m_result;
};

void* ConsoleClass143::executeObjectMethod()
{
    if (m_argc != 2)
        return 0;
    std::string a(*m_arg0);
    std::string b(*m_arg1);
    m_hasResult = true;
    m_result = getActiveTriggerManager()->createTrigger(a, b);
    return &m_result;
}

}
} } }
