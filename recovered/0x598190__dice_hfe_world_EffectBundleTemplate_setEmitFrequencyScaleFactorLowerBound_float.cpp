// FUNCTION: BF2 0x598190
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x394];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x598190(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_EffectBundleTemplate_setEmitFrequencyScaleFactorLowerBound_float (0x598190)
