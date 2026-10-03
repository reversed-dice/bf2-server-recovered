// FUNCTION: BF2 0x513890
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x23c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x513890(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setAreaValueTeam2_unsigned_int (0x513890)
