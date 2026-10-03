// FUNCTION: BF2 0x5a4fb0
namespace dice { namespace hfe {
class ParticleTemplate {
public:
    char _pad[0xa8];
    int field;
    void setGeometryPart(int v);
};
void ParticleTemplate::setGeometryPart(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ParticleTemplate_setGeometryPart (0x5a4fb0)
