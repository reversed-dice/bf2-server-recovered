// FUNCTION: BF2 0x5c5f90
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x85];
    bool field;
    void setSwitchGuiOnCamera(bool v);
};
void WeaponHudCompTemplate::setSwitchGuiOnCamera(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setSwitchGuiOnCamera (0x5c5f90)
