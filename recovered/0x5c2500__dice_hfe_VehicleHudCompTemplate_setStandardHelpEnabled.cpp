// FUNCTION: BF2 0x5c2500
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x5e];
    bool field;
    void setStandardHelpEnabled(bool v);
};
void VehicleHudCompTemplate::setStandardHelpEnabled(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setStandardHelpEnabled (0x5c2500)
