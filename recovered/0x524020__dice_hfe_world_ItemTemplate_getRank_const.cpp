// FUNCTION: BF2 0x524020
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x210];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x524020(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemTemplate_getRank_const (0x524020)
