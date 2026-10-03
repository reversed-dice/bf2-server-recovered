// FUNCTION: BF2 0x634510
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x630];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x634510(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EngineTemplate_setMaxAngleOfAttack_float (0x634510)
