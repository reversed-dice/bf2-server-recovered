// FUNCTION: BF2 0x637b50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x637b50(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_getOtherCollisionLod_const (0x637b50)
