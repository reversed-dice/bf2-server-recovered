// FUNCTION: BF2 0x59f490
namespace dice { namespace hfe { namespace world {

template <int N>
struct VPad : VPad<N-1> {
    virtual void f(char (*)[N+1]) {}
};

template <>
struct VPad<0> {
    virtual void f(char (*)[1]) {}
};

struct ParticleSystem : VPad<135> {
    virtual void getAnimationSpeed() {}
};

class NonScreenAlignedParticleSystemTemplate {
public:
    void getAnimationSpeed() const;

    unsigned int m_unk_0x12;
    long* m_unk_0x80;
    int m_unk_0x90;
};

void NonScreenAlignedParticleSystemTemplate::getAnimationSpeed() const {
    reinterpret_cast<ParticleSystem*>(
        *reinterpret_cast<void* const*>(
            reinterpret_cast<const char*>(this) + 0x80
        )
    )->getAnimationSpeed();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_NonScreenAlignedParticleSystemTemplate::getAnimationSpeed_const (0x59f490)