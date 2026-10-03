// FUNCTION: BF2 0x6dfd00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6dfd00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointResponsePhysics_getRef (0x6dfd00)
