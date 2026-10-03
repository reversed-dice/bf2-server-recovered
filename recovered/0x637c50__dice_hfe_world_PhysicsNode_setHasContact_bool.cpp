// FUNCTION: BF2 0x637c50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x240];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x637c50(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_setHasContact_bool (0x637c50)
