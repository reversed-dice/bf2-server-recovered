// FUNCTION: BF2 0x5b8a10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1d4];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b8a10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getCanBeRepairedWhenWreck (0x5b8a10)
