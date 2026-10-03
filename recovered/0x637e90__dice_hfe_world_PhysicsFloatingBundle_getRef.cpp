// FUNCTION: BF2 0x637e90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x244];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x637e90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsFloatingBundle_getRef (0x637e90)
