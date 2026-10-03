// FUNCTION: BF2 0x63a360
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x244];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_580(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsWing_addRef (580)
