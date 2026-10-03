// FUNCTION: BF2 0x786490
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x28); }
};
float f_32(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectMobile_getHearingProbabilityMax_const (0x786490)
