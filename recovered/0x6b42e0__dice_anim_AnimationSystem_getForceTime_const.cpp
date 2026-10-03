// FUNCTION: BF2 0x6b42e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xa4];
    float m_v;
    float get() { return m_v; }
};
float get_0x6b42e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_anim_AnimationSystem_getForceTime_const (0x6b42e0)
