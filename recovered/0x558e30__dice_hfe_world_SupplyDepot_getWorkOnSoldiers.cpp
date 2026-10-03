// FUNCTION: BF2 0x558e30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x230];
    void* m_p;
    unsigned char get() { return *(unsigned char*)((char*)m_p + 0x1d1); }
};
unsigned int f_560(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SupplyDepot_getWorkOnSoldiers (0x558e30)

// re-trigger validate
