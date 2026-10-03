// FUNCTION: BF2 0x637b00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x90];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x637b00(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_setFloaterMod_float (0x637b00)
