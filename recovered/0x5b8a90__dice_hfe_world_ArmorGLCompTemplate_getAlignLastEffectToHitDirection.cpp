// FUNCTION: BF2 0x5b8a90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x15];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b8a90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getAlignLastEffectToHitDirection (0x5b8a90)
