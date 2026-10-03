// FUNCTION: BF2 0x5b8b10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1ee];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b8b10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getCanBeDestroyed (0x5b8b10)
