// FUNCTION: BF2 0x637c90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x22d];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x637c90(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_setIsPlatformPhysics_bool (0x637c90)
