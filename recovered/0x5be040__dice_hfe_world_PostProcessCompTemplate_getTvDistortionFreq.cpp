// FUNCTION: BF2 0x5be040
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x30];
    float m_v;
    float get() { return m_v; }
};
float get_0x5be040(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_getTvDistortionFreq (0x5be040)
