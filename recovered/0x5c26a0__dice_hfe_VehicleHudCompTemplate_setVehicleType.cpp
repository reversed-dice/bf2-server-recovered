// FUNCTION: BF2 0x5c26a0
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x94];
    int field;
    void setVehicleType(int v);
};
void VehicleHudCompTemplate::setVehicleType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setVehicleType (0x5c26a0)
