// FUNCTION: BF2 0x641820
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x6e];
    bool field;
    void setCastsDynamicShadow(bool v);
};
void LightSourceTemplate::setCastsDynamicShadow(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setCastsDynamicShadow (0x641820)
