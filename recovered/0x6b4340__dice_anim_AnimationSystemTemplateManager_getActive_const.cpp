// FUNCTION: BF2 0x6b4340
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x48];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x6b4340(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_AnimationSystemTemplateManager_getActive_const (0x6b4340)
