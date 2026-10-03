// FUNCTION: BF2 0x5c26c0
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x5f];
    bool field;
    void setUseSelectionIcons(bool v);
};
void VehicleHudCompTemplate::setUseSelectionIcons(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setUseSelectionIcons (0x5c26c0)
