// FUNCTION: BF2 0x641800
namespace dice { namespace hfe {
class LightSourceTemplate {
public:
    char _pad[0x6d];
    bool field;
    void setCastsStaticShadow(bool v);
};
void LightSourceTemplate::setCastsStaticShadow(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_LightSourceTemplate_setCastsStaticShadow (0x641800)
