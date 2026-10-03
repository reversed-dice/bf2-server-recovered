// FUNCTION: BF2 0xb161f0
#include <string>

namespace dice { namespace hfe { namespace ai {

class IAIObject;

extern IAIObject* g_10adf40;                              // 0x010adf40
extern std::string get_793350(IAIObject*);             // 0x00793350
extern void set_793750(IAIObject*, std::string);       // 0x00793750

class CC_b161f0 {
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

void* CC_b161f0::executeObjectMethod()
{
    if (m_sel == 0) {
        m_flag = 1;
        m_value.assign(get_793350(g_10adf40));
        return &m_value;
    }
    if (m_sel == 1) {
        std::string s(*m_arg);
        m_flag = 0;
        set_793750(g_10adf40, s);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass224_executeObjectMethod (0xb161f0)
