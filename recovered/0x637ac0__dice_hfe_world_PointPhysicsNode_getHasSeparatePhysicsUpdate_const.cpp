// FUNCTION: BF2 0x637ac0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x6c];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x637ac0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_getHasSeparatePhysicsUpdate_const (0x637ac0)
