// FUNCTION: BF2 0x5137d0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x22c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5137d0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setMinNrToTakeControl_unsigned_int (0x5137d0)
