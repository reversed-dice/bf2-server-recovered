// FUNCTION: BF2 0x4b7ba0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    float m_v;
    float get() { return m_v; }
};
float get_0x4b7ba0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_MMCell_getDamageMod (0x4b7ba0)
