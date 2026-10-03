// FUNCTION: BF2 0x637cc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x244];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_580(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsFloatingBundle_addRef (580)

// re-trigger validate
