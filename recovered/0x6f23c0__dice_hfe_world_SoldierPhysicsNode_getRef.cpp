// FUNCTION: BF2 0x6f23c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x9c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6f23c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_getRef (0x6f23c0)
