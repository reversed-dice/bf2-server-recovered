// FUNCTION: BF2 0x6b4360
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50];
    float m_v;
    float get() { return m_v; }
};
float get_0x6b4360(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_AnimationSystemTemplateManager_getPlaybackModifier_const (0x6b4360)
