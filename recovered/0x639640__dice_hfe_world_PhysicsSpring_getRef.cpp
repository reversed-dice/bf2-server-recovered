// FUNCTION: BF2 0x639640
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x244];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x639640(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PhysicsSpring_getRef (0x639640)
