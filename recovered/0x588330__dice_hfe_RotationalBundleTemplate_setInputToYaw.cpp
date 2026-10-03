// FUNCTION: BF2 0x588330
namespace dice { namespace hfe {
class RotationalBundleTemplate {
public:
    char _pad[0x254];
    int field;
    void setInputToYaw(int v);
};
void RotationalBundleTemplate::setInputToYaw(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_RotationalBundleTemplate_setInputToYaw (0x588330)
