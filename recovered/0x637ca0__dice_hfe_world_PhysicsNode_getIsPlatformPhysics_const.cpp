// FUNCTION: BF2 0x637ca0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x22d];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x637ca0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_getIsPlatformPhysics_const (0x637ca0)
