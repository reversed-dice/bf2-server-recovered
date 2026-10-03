// FUNCTION: BF2 0x5b8af0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1ed];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b8af0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getDestroyOnSpectacularDeath (0x5b8af0)
