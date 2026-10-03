// FUNCTION: BF2 0x5aa6e0
namespace dice { namespace hfe { namespace world {

class SpriteParticleSystemTemplate {
public:
    char ___pad0[0x80];
    long* m_unk_0x80;
    int m_unk_0x90;

    bool getNearCullingEnable() const;
};

bool SpriteParticleSystemTemplate::getNearCullingEnable() const {
    return ((bool (*)(long*))((*(long**)m_unk_0x80)[0x4f0 / 8]))(m_unk_0x80);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate::getNearCullingEnable_const (0x5aa6e0)