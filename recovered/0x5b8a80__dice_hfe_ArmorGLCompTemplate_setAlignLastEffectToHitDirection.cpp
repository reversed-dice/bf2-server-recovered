// FUNCTION: BF2 0x5b8a80
namespace dice { namespace hfe {
class ArmorGLCompTemplate {
public:
    char _pad[0x15];
    bool field;
    void setAlignLastEffectToHitDirection(bool v);
};
void ArmorGLCompTemplate::setAlignLastEffectToHitDirection(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ArmorGLCompTemplate_setAlignLastEffectToHitDirection (0x5b8a80)
