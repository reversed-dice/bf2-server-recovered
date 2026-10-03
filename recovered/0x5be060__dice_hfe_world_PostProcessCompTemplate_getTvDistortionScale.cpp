// FUNCTION: BF2 0x5be060
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x34];
    float m_v;
    float get() { return m_v; }
};
float get_0x5be060(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_getTvDistortionScale (0x5be060)
