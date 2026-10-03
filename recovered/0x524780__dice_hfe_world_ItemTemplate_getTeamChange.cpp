// FUNCTION: BF2 0x524780
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x214];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x524780(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemTemplate_getTeamChange (0x524780)
