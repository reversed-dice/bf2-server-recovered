// FUNCTION: BF2 0x6cf670
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x6cf670(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_anim_MovementTrigger_setTriggerOnAcceleration_bool (0x6cf670)
