// FUNCTION: BF2 0x609e70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_v;
    void set(void* v) { m_v = v; }
};
void set_0x609e70(Accessor* p, void* v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_setActiveAnimationSystem_dice_anim_IAnimationSystemptr (0x609e70)
