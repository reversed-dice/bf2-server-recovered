// FUNCTION: BF2 0x5c2440
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x8c];
    int field;
    void setGuiIndex(int v);
};
void VehicleHudCompTemplate::setGuiIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setGuiIndex (0x5c2440)
