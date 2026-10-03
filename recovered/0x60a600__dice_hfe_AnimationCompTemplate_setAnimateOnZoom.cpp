// FUNCTION: BF2 0x60a600
namespace dice { namespace hfe {
class AnimationCompTemplate {
public:
    char _pad[0x10];
    bool field;
    void setAnimateOnZoom(bool v);
};
void AnimationCompTemplate::setAnimateOnZoom(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AnimationCompTemplate_setAnimateOnZoom (0x60a600)
