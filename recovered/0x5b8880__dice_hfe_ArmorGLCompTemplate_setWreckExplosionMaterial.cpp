// FUNCTION: BF2 0x5b8880
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x1a4];
    int field;
    void setWreckExplosionMaterial(int v);
};
void ArmorGLCompTemplate::setWreckExplosionMaterial(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setWreckExplosionMaterial (0x5b8880)
