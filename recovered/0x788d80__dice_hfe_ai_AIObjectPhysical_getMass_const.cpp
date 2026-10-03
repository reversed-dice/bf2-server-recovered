// FUNCTION: BF2 0x788d80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0xc); }
};
float f_16(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectPhysical_getMass_const (0x788d80)
