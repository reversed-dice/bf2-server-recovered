// FUNCTION: BF2 0x6cf6a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x51];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x6cf6a0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_MovementTrigger_getUseDirection_const (0x6cf6a0)
