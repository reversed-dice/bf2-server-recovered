// FUNCTION: BF2 0x5aa740
namespace dice { namespace hfe { namespace world {

class SpriteParticleSystemTemplate {
public:
    void* createObject() const;
};

struct SpriteParticleSystemTemplateVTable {
    void* pad[0x13];
    void* (*createObject)(const SpriteParticleSystemTemplate*, unsigned int, unsigned int);
};

void* SpriteParticleSystemTemplate::createObject() const {
    const SpriteParticleSystemTemplateVTable* vtab = *reinterpret_cast<const SpriteParticleSystemTemplateVTable* const*>(this);
    vtab->createObject(this, 0x20, 0);
    return 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate::createObject_const (0x5aa740)