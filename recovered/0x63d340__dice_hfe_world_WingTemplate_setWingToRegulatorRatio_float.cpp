// FUNCTION: BF2 0x63d340
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2ac];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x63d340(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WingTemplate_setWingToRegulatorRatio_float (0x63d340)
