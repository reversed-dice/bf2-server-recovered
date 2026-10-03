// FUNCTION: BF2 0x60a890
namespace dice { namespace hfe { namespace world {

class DefaultAnimationComp {
    unsigned char _pad[0x28];
    unsigned long long m_state;
public:
    void disable();
};

void DefaultAnimationComp::disable() {
    m_state = 0ULL;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationComp_disable (0x60a890)