// FUNCTION: BF2 0x60b140
namespace dice { namespace hfe {
class DefaultAnimationCompTemplate {
public:
    char _pad[0x24];
    bool field;
    void setLoopingFire(bool v);
};
void DefaultAnimationCompTemplate::setLoopingFire(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DefaultAnimationCompTemplate_setLoopingFire (0x60b140)
