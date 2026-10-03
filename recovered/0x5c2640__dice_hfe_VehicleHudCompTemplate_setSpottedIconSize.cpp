// FUNCTION: BF2 0x5c2640
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x88];
    int field;
    void setSpottedIconSize(int v);
};
void VehicleHudCompTemplate::setSpottedIconSize(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setSpottedIconSize (0x5c2640)
