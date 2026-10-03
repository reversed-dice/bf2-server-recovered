// FUNCTION: BF2 0x5b8890
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1a4];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5b8890(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getWreckExplosionMaterial (0x5b8890)
