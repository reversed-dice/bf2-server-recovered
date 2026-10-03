// FUNCTION: BF2 0x5b8770
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x180];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5b8770(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getDefaultMaterial_const (0x5b8770)
