// FUNCTION: BF2 0x637c80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x241];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x637c80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsNode_getIsInAir_const (0x637c80)
