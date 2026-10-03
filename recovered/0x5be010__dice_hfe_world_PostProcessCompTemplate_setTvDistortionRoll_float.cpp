// FUNCTION: BF2 0x5be010
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2c];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x5be010(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_setTvDistortionRoll_float (0x5be010)
