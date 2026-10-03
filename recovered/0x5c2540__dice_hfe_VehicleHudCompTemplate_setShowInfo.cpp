// FUNCTION: BF2 0x5c2540
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x5a];
    bool field;
    void setShowInfo(bool v);
};
void VehicleHudCompTemplate::setShowInfo(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setShowInfo (0x5c2540)
