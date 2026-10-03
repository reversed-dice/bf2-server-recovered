// FUNCTION: BF2 0x524760
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x524760(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ItemTemplate_getTeam (0x524760)
