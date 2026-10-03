// FUNCTION: BF2 0x5c2680
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x80];
    int field;
    void setEnablePostProcessingOnGuiIndex(int v);
};
void VehicleHudCompTemplate::setEnablePostProcessingOnGuiIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setEnablePostProcessingOnGuiIndex (0x5c2680)
