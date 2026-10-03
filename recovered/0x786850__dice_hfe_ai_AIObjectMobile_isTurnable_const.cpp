// FUNCTION: BF2 0x786850
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x34); }
};
unsigned int f_32(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_isTurnable_const (0x786850)
