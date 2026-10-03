// FUNCTION: BF2 0x618650
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x14); }
};
unsigned int f_48(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishCollisionComp_hasCollisionEffect_const (0x618650)
