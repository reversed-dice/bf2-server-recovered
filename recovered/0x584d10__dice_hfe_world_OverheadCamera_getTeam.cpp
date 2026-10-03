// FUNCTION: BF2 0x584d10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x370];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x584d10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_getTeam (0x584d10)
