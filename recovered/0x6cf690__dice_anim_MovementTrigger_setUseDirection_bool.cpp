// FUNCTION: BF2 0x6cf690
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x51];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x6cf690(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_anim_MovementTrigger_setUseDirection_bool (0x6cf690)
