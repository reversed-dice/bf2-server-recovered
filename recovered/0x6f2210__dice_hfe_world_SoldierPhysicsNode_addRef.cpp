// FUNCTION: BF2 0x6f2210
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x9c];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_156(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierPhysicsNode_addRef (156)
