// FUNCTION: BF2 0xb146b0
#include <string>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

extern IAIObject* g_10adf70;                              // 0x010adf70
extern std::string get_797c00(IAIObject*);             // 0x00797c00
extern void set_797cc0(IAIObject*, std::string);       // 0x00797cc0

class CC_b146b0 {
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

void* CC_b146b0::executeObjectMethod()
{
    if (m_sel == 0) {
        m_flag = 1;
        m_value.assign(get_797c00(g_10adf70));
        return &m_value;
    }
    if (m_sel == 1) {
        std::string s(*m_arg);
        m_flag = 0;
        set_797cc0(g_10adf70, s);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass252_executeObjectMethod (0xb146b0)
