// FUNCTION: BF2 0x550d60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3cc];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x550d60(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_setRequestedPose_dice_hfe_world_SoldierPose (0x550d60)
