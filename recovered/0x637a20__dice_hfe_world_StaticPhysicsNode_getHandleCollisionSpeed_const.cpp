// FUNCTION: BF2 0x637a20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    float m_v;
    float get() { return m_v; }
};
float get_0x637a20(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticPhysicsNode_getHandleCollisionSpeed_const (0x637a20)
