// FUNCTION: BF2 0x5aa510
namespace dice { namespace hfe { namespace world {

extern unsigned int CID_SpriteParticleSystem;

class SpriteParticleSystem {
public:
    unsigned int getClassID() const;
};

unsigned int SpriteParticleSystem::getClassID() const {
    return CID_SpriteParticleSystem;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystem::getClassID_const (0x5aa510)