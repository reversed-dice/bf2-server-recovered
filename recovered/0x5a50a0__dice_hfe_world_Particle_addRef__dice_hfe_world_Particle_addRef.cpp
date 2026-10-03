// FUNCTION: BF2 0x5a50a0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x220];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_544(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_Particle_addRef (544)
