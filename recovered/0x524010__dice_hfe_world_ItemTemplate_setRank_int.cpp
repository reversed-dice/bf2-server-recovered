// FUNCTION: BF2 0x524010
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x210];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x524010(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemTemplate_setRank_int (0x524010)
