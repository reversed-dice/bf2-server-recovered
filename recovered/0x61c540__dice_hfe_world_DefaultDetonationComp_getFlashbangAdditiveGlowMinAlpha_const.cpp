// FUNCTION: BF2 0x61c540
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    float get() { return *(float*)((char*)m_p + 0xc0); }
};
float f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_getFlashbangAdditiveGlowMinAlpha_const (0x61c540)
