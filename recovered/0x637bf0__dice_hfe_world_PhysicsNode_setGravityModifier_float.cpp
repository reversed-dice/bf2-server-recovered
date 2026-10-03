// FUNCTION: BF2 0x637bf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x637bf0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_setGravityModifier_float (0x637bf0)
