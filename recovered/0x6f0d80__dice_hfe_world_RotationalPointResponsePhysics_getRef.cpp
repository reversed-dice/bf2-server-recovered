// FUNCTION: BF2 0x6f0d80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xb0];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6f0d80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalPointResponsePhysics_getRef (0x6f0d80)
