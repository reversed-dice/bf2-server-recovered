// FUNCTION: BF2 0x5b8760
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x180];
    int field;
    void setDefaultMaterial(int v);
};
void ArmorGLCompTemplate::setDefaultMaterial(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setDefaultMaterial (0x5b8760)
