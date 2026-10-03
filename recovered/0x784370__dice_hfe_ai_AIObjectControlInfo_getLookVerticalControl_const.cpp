// FUNCTION: BF2 0x784370
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    unsigned int get() { return *(unsigned int*)((char*)m_p + 0x90); }
};
unsigned int f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectControlInfo_getLookVerticalControl_const (0x784370)
