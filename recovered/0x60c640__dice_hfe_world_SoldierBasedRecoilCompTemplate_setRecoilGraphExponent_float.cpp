// FUNCTION: BF2 0x60c640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x54];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x60c640(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilCompTemplate_setRecoilGraphExponent_float (0x60c640)
