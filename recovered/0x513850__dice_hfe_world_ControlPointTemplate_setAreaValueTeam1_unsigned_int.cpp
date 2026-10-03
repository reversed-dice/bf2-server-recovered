// FUNCTION: BF2 0x513850
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x238];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x513850(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setAreaValueTeam1_unsigned_int (0x513850)
