// FUNCTION: BF2 0x5a6790
namespace dice { namespace hfe { namespace world {

class ParticleSystemTemplateBase {
public:
    unsigned char pad_0x00[0x68];
    unsigned int m_unk_0x68;
    unsigned char pad_0x6C[0x80 - 0x6C];
    long* m_unk_0x80;

    unsigned int getIsLooping() const;
};

unsigned int ParticleSystemTemplateBase::getIsLooping() const {
    return ((unsigned char (*)(void*))((*reinterpret_cast<long**>(m_unk_0x80))[0x21]))(reinterpret_cast<void*>(m_unk_0x80));
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase::getIsLooping_const (0x5a6790)