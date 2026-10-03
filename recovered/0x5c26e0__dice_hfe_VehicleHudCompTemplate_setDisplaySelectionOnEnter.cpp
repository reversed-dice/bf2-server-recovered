// FUNCTION: BF2 0x5c26e0
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x60];
    bool field;
    void setDisplaySelectionOnEnter(bool v);
};
void VehicleHudCompTemplate::setDisplaySelectionOnEnter(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setDisplaySelectionOnEnter (0x5c26e0)
