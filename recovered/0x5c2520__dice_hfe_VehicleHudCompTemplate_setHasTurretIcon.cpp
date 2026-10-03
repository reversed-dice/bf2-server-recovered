// FUNCTION: BF2 0x5c2520
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x58];
    bool field;
    void setHasTurretIcon(bool v);
};
void VehicleHudCompTemplate::setHasTurretIcon(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setHasTurretIcon (0x5c2520)
