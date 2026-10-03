// FUNCTION: BF2 0x521500
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x304];
    int field;
    void setVehicleCategory(int v);
};
void PlayerControlObjectTemplate::setVehicleCategory(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setVehicleCategory (0x521500)
