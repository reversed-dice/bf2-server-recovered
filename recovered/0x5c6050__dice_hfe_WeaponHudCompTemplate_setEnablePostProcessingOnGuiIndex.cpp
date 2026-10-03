// FUNCTION: BF2 0x5c6050
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x8c];
    int field;
    void setEnablePostProcessingOnGuiIndex(int v);
};
void WeaponHudCompTemplate::setEnablePostProcessingOnGuiIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setEnablePostProcessingOnGuiIndex (0x5c6050)
