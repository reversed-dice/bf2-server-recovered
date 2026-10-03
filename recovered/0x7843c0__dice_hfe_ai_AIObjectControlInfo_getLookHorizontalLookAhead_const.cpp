// FUNCTION: BF2 0x7843c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0x50); }
};
float f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectControlInfo_getLookHorizontalLookAhead_const (0x7843c0)
