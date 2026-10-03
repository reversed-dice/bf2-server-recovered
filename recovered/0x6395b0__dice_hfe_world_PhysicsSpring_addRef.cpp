// FUNCTION: BF2 0x6395b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x244];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_580(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsSpring_addRef (580)
