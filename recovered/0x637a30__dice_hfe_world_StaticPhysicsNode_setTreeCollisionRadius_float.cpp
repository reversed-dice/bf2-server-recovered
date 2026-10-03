// FUNCTION: BF2 0x637a30
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x637a30(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_StaticPhysicsNode_setTreeCollisionRadius_float (0x637a30)
