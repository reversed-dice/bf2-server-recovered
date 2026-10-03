// FUNCTION: BF2 0x546770
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x4c0];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x546770(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_setCurrentAbility_float (0x546770)
