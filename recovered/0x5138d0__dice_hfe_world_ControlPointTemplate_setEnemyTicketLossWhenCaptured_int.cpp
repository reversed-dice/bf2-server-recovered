// FUNCTION: BF2 0x5138d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x240];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5138d0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setEnemyTicketLossWhenCaptured_int (0x5138d0)
