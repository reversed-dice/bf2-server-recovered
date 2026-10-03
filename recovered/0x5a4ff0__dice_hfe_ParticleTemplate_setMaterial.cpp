// FUNCTION: BF2 0x5a4ff0
namespace dice { namespace hfe {
class ParticleTemplate {
public:
    char _pad[0x850];
    int field;
    void setMaterial(int v);
};
void ParticleTemplate::setMaterial(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ParticleTemplate_setMaterial (0x5a4ff0)
