// FUNCTION: BF2 0x5a4ff0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x850];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5a4ff0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleTemplate_setMaterial_int (0x5a4ff0)
