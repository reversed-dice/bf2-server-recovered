// FUNCTION: BF2 0x609f00
namespace dice { namespace hfe { namespace world {

class AnimationComp {
public:
    void disable();
private:
    char pad_0x00[0x28];
    void* m_ptr; // offset 0x28
};

void AnimationComp::disable() {
    m_ptr = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_disable (0x609f00)