// FUNCTION: BF2 0x5b8a80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x15];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5b8a80(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_setAlignLastEffectToHitDirection_bool (0x5b8a80)
