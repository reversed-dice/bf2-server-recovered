// FUNCTION: BF2 0x5c24c0
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x5c];
    bool field;
    void setUsePlayerIcon(bool v);
};
void VehicleHudCompTemplate::setUsePlayerIcon(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setUsePlayerIcon (0x5c24c0)
