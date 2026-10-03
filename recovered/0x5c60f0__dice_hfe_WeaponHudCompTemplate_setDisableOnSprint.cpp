// FUNCTION: BF2 0x5c60f0
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x88];
    bool field;
    void setDisableOnSprint(bool v);
};
void WeaponHudCompTemplate::setDisableOnSprint(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setDisableOnSprint (0x5c60f0)
