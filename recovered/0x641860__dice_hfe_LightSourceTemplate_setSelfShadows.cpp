// FUNCTION: BF2 0x641860
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x6f];
    bool field;
    void setSelfShadows(bool v);
};
void LightSourceTemplate::setSelfShadows(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setSelfShadows (0x641860)
