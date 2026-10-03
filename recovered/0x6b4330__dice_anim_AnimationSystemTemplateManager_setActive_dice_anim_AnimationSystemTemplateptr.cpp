// FUNCTION: BF2 0x6b4330
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x6b4330(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_anim_AnimationSystemTemplateManager_setActive_dice_anim_AnimationSystemTemplateptr (0x6b4330)
