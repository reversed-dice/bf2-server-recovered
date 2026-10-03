// FUNCTION: BF2 0x5c5f70
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x84];
    bool field;
    void setHasRangeFinder(bool v);
};
void WeaponHudCompTemplate::setHasRangeFinder(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setHasRangeFinder (0x5c5f70)
