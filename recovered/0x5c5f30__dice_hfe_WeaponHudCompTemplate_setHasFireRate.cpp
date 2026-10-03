// FUNCTION: BF2 0x5c5f30
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x82];
    bool field;
    void setHasFireRate(bool v);
};
void WeaponHudCompTemplate::setHasFireRate(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setHasFireRate (0x5c5f30)
