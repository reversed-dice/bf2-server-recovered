// FUNCTION: BF2 0x61c6b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x81); }
};
unsigned int f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultDetonationComp_getShowMineIndicationIcon_const (0x61c6b0)
