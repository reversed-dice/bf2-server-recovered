// FUNCTION: BF2 0x5a4fd0
namespace dice { namespace hfe {
class ParticleTemplate {
public:
    char _pad[0xac];
    int field;
    void setCollisionPart(int v);
};
void ParticleTemplate::setCollisionPart(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ParticleTemplate_setCollisionPart (0x5a4fd0)
