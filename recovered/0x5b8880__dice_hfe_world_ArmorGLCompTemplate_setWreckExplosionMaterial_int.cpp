// FUNCTION: BF2 0x5b8880
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1a4];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5b8880(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_setWreckExplosionMaterial_int (0x5b8880)
