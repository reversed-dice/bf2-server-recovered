// FUNCTION: BF2 0x5b8b00
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x1ee];
    bool field;
    void setCanBeDestroyed(bool v);
};
void ArmorGLCompTemplate::setCanBeDestroyed(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setCanBeDestroyed (0x5b8b00)
