// FUNCTION: BF2 0x5be020
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2c];
    float m_v;
    float get() { return m_v; }
};
float get_0x5be020(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_getTvDistortionRoll (0x5be020)
