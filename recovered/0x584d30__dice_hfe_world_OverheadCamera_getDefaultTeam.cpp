// FUNCTION: BF2 0x584d30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x370];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x584d30(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_getDefaultTeam (0x584d30)
