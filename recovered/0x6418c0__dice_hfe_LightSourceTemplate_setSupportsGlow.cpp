// FUNCTION: BF2 0x6418c0
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x73];
    bool field;
    void setSupportsGlow(bool v);
};
void LightSourceTemplate::setSupportsGlow(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setSupportsGlow (0x6418c0)
