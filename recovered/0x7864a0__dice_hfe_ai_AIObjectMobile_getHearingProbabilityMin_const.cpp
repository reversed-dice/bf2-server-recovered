// FUNCTION: BF2 0x7864a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x2c); }
};
float f_32(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_getHearingProbabilityMin_const (0x7864a0)
