// FUNCTION: BF2 0x6dfc60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x40];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_64(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PointResponsePhysics_addRef (64)
