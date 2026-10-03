// FUNCTION: BF2 0x5c5d50
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x64];
    int field;
    void setCrosshairIconSize(int v);
};
void WeaponHudCompTemplate::setCrosshairIconSize(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setCrosshairIconSize (0x5c5d50)
