// FUNCTION: BF2 0x558c40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x204];
    float m_v;
    float get() { return m_v; }
};
float get_0x558c40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierTemplate_getRidingWithDistMod (0x558c40)
