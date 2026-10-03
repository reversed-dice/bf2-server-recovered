// FUNCTION: BF2 0x5c2560
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x62];
    bool field;
    void setDisableOnSprint(bool v);
};
void VehicleHudCompTemplate::setDisableOnSprint(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setDisableOnSprint (0x5c2560)
