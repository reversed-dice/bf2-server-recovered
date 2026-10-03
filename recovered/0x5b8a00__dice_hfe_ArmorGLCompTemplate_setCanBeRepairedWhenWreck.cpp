// FUNCTION: BF2 0x5b8a00
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x1d4];
    bool field;
    void setCanBeRepairedWhenWreck(bool v);
};
void ArmorGLCompTemplate::setCanBeRepairedWhenWreck(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setCanBeRepairedWhenWreck (0x5b8a00)
