// FUNCTION: BF2 0xb1a000
#include <string>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

extern IAIObject* g_10adf50;                              // 0x010adf50
extern std::string get_794870(IAIObject*);             // 0x00794870
extern void set_795370(IAIObject*, std::string);       // 0x00795370

class CC_b1a000 {
public:
    char               _pad0[0x30];
    int                m_sel;        // 0x30
    char               _pad1[0x4];
    const std::string* m_arg;        // 0x38
    char               _pad2[0xc8];
    char               m_flag;       // 0x108
    char               _pad3[0x7];
    std::string        m_value;      // 0x110
    void* executeObjectMethod();
};

void* CC_b1a000::executeObjectMethod()
{
    if (m_sel == 0) {
        m_flag = 1;
        m_value.assign(get_794870(g_10adf50));
        return &m_value;
    }
    if (m_sel == 1) {
        std::string s(*m_arg);
        m_flag = 0;
        set_795370(g_10adf50, s);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass94_executeObjectMethod (0xb1a000)
