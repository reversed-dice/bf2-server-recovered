// FUNCTION: BF2 0x508fb0
namespace dice { namespace hfe { namespace world {

class AnimatedBundle {
public:
    unsigned int m_unk_0x48;
    unsigned int m_unk_0x4B;
    long * m_unk_0x70;
    int m_unk_0x240;
    long * m_unk_0x248;
    unsigned int m_unk_0x258;
    void* m_unk_0x260;

    void setTriggerMessage(unsigned int);
};

void AnimatedBundle::setTriggerMessage(unsigned int msg) {
    char* basePtr = reinterpret_cast<char*>(this);
    int count = 2;
    do {
        long* ptr = *reinterpret_cast<long**>(basePtr + 0x248);
        if (ptr != 0) {
            void (**vtable)(long*, unsigned int) = reinterpret_cast<void (**)(long*, unsigned int)>(*ptr);
            vtable[12](ptr, msg);
        }
        basePtr += 8;
        --count;
    } while (count != 0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimatedBundle::setTriggerMessage_int (0x508fb0)