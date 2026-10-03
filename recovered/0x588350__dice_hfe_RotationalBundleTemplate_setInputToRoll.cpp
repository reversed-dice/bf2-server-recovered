// FUNCTION: BF2 0x588350
namespace dice { namespace hfe {
class RotationalBundleTemplate {
public:
    char _pad[0x25c];
    int field;
    void setInputToRoll(int v);
};
void RotationalBundleTemplate::setInputToRoll(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_RotationalBundleTemplate_setInputToRoll (0x588350)
