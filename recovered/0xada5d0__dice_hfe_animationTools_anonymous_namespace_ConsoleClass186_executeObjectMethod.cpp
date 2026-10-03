// FUNCTION: BF2 0xada5d0
namespace dice { namespace hfe { namespace animationTools {

extern "C" void* getObj_ad4120();
extern "C" void  setVal_6b47a0(void*, float);

class CC186 {
public:
    char         _pad0[0x30];
    int          m_sel;     // 0x30
    char         _pad1[0x4];
    const float* m_arg;     // 0x38
    char         _pad2[0xc8];
    char         m_flag;    // 0x108
    char         _pad3[0x3];
    float        m_value;   // 0x10c
    void* executeObjectMethod();
};

void* CC186::executeObjectMethod()
{
    if (m_sel == 0) {
        m_flag = 1;
        m_value = *(const float*)((const char*)getObj_ad4120() + 8);
        return &m_value;
    }
    if (m_sel == 1) {
        float v = *m_arg;
        m_flag = 0;
        setVal_6b47a0(getObj_ad4120(), v);
    }
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass186_executeObjectMethod (0xada5d0)
