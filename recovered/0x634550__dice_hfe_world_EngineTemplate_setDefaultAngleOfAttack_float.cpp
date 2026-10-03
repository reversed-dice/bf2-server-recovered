// FUNCTION: BF2 0x634550
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x634];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x634550(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineTemplate_setDefaultAngleOfAttack_float (0x634550)
