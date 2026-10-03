// FUNCTION: BF2 0x5b87c0
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x18c];
    int field;
    void setExplosionMaterial(int v);
};
void ArmorGLCompTemplate::setExplosionMaterial(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setExplosionMaterial (0x5b87c0)
