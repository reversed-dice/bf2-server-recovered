// FUNCTION: BF2 0x5c5fb0
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x86];
    bool field;
    void setShowAmmo(bool v);
};
void WeaponHudCompTemplate::setShowAmmo(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setShowAmmo (0x5c5fb0)
