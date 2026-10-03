// FUNCTION: BF2 0x637b40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x98];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x637b40(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointPhysicsNode_setOtherCollisionLod_int (0x637b40)
