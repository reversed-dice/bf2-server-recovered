// FUNCTION: BF2 0x5aa790
namespace dice { namespace hfe { namespace world {
class SpriteParticleSystemTemplate {
public:
    unsigned long long getParticleDrawOrderEnum() const;

    bool getNearCullingEnable() const;
    unsigned char pad_0x00_to_0x7f[0x80];  // padding to push m_unk_0x80 to offset 0x80
    long* m_unk_0x80;  // +0x80
    int m_unk_0x90;  // +0x90
};

unsigned long long SpriteParticleSystemTemplate::getParticleDrawOrderEnum() const
{
    long* p = m_unk_0x80;
    if (p == 0) return 0;
    return ((unsigned long long (*)(long*))(*(void**)((char*)(*(void**)p) + 0x3b0)))(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate::getParticleDrawOrderEnum_const (0x5aa790)