// FUNCTION: BF2 0x50a290
namespace dice { namespace hfe { namespace world {

class AnimatedBundle {
public:
    char _pad_0x00[0x240];
    int m_unk_0x240;

    int release();
};

int AnimatedBundle::release() {
    int i = this->m_unk_0x240;
    i--;
    this->m_unk_0x240 = i;
    if (i == 0) {
        if (this) {
            void (**vtable)(AnimatedBundle*) = *reinterpret_cast<void(***)(AnimatedBundle*)>(this);
            vtable[6](this);
        }
    }
    return i;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundle::release (0x50a290)