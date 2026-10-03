// FUNCTION: BF2 0x6b4290
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x6b4290(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_AnimationSystem_getTemplate_const (0x6b4290)
