// FUNCTION: BF2 0x9cea80
namespace dice { namespace hfe { namespace world {

extern "C" void* getObj_9bc590();
extern "C" int   getVal_5a7320(void*);
extern "C" void  setVal_5a72e0(void*, int);

class CC293 {
public:
    char       _pad0[0x30];
    int        m_sel;     // 0x30
    char       _pad1[0x4];
    const int* m_arg;     // 0x38
    char       _pad2[0xc8];
    char       m_flag;    // 0x108
    char       _pad3[0x3];
    int        m_value;   // 0x10c
    void* executeObjectMethod();
};

void* CC293::executeObjectMethod()
{
    if (m_sel == 0) {
        m_flag = 1;
        m_value = getVal_5a7320(getObj_9bc590());
        return &m_value;
    }
    if (m_sel == 1) {
        int v = *m_arg;
        m_flag = 0;
        setVal_5a72e0(getObj_9bc590(), v);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass293_executeObjectMethod (0x9cea80)
