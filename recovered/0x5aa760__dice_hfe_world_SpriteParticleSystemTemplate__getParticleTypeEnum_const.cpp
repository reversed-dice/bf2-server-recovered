// FUNCTION: BF2 0x5aa760
namespace dice { namespace hfe { namespace world {

class SpriteParticleSystemTemplate {
public:
    unsigned int getParticleTypeEnum() const;

private:
    char m_pad_00_80[0x80];
    long* m_unk_0x80;
    int m_unk_0x90;
};

unsigned int SpriteParticleSystemTemplate::getParticleTypeEnum() const {
    long* obj = m_unk_0x80;
    if (obj == 0) return 0;
    return *(unsigned int*)((unsigned int*(*)(long*))((void**)(*obj))[0x74])(obj);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate::getParticleTypeEnum_const (0x5aa760)