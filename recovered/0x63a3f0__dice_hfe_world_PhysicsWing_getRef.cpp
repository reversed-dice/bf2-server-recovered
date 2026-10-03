// FUNCTION: BF2 0x63a3f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x244];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x63a3f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsWing_getRef (0x63a3f0)
