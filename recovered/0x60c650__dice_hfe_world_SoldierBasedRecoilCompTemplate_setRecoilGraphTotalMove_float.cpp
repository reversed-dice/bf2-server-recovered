// FUNCTION: BF2 0x60c650
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x60c650(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilCompTemplate_setRecoilGraphTotalMove_float (0x60c650)
