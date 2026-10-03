// FUNCTION: BF2 0x5c2700
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x61];
    bool field;
    void setUseVehicleCommRose(bool v);
};
void VehicleHudCompTemplate::setUseVehicleCommRose(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setUseVehicleCommRose (0x5c2700)
