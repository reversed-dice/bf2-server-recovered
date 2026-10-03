// FUNCTION: BF2 0x521580
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x30c];
    int field;
    void setVehicleType(int v);
};
void PlayerControlObjectTemplate::setVehicleType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setVehicleType (0x521580)
