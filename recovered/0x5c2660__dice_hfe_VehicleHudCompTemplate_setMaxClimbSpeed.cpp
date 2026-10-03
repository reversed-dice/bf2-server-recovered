// FUNCTION: BF2 0x5c2660
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x90];
    int field;
    void setMaxClimbSpeed(int v);
};
void VehicleHudCompTemplate::setMaxClimbSpeed(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setMaxClimbSpeed (0x5c2660)
