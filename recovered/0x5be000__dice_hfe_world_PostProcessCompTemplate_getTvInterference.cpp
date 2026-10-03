// FUNCTION: BF2 0x5be000
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    float m_v;
    float get() { return m_v; }
};
float get_0x5be000(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_getTvInterference (0x5be000)
