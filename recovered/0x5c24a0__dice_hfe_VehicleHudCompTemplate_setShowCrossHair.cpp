// FUNCTION: BF2 0x5c24a0
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x59];
    bool field;
    void setShowCrossHair(bool v);
};
void VehicleHudCompTemplate::setShowCrossHair(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setShowCrossHair (0x5c24a0)
