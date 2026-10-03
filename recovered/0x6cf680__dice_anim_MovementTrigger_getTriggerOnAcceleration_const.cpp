// FUNCTION: BF2 0x6cf680
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6cf680(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_MovementTrigger_getTriggerOnAcceleration_const (0x6cf680)
