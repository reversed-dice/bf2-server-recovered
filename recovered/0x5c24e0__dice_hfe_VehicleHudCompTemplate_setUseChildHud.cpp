// FUNCTION: BF2 0x5c24e0
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x5d];
    bool field;
    void setUseChildHud(bool v);
};
void VehicleHudCompTemplate::setUseChildHud(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setUseChildHud (0x5c24e0)
