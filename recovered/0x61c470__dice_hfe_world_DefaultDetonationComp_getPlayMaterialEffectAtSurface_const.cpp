// FUNCTION: BF2 0x61c470
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x38); }
};
unsigned int f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_getPlayMaterialEffectAtSurface_const (0x61c470)
