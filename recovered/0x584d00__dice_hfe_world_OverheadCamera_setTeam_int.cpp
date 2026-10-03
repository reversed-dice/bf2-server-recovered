// FUNCTION: BF2 0x584d00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x370];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x584d00(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_setTeam_int (0x584d00)
