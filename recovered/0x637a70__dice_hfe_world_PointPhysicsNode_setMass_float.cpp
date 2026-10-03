// FUNCTION: BF2 0x637a70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x637a70(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_setMass_float (0x637a70)
