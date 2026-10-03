// FUNCTION: BF2 0x637aa0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    float m_v;
    float get() { return m_v; }
};
float get_0x637aa0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_getGravityModifier_const (0x637aa0)
