// FUNCTION: BF2 0x5883b0
namespace dice { namespace hfe {
class RotationalBundleTemplate {
public:
    char _pad[0x266];
    bool field;
    void setRememberExcessInput(bool v);
};
void RotationalBundleTemplate::setRememberExcessInput(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_RotationalBundleTemplate_setRememberExcessInput (0x5883b0)
