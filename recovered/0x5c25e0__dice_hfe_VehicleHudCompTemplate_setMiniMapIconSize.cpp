// FUNCTION: BF2 0x5c25e0
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x84];
    int field;
    void setMiniMapIconSize(int v);
};
void VehicleHudCompTemplate::setMiniMapIconSize(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setMiniMapIconSize (0x5c25e0)
