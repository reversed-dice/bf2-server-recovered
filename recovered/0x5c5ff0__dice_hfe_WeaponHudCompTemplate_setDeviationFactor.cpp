// FUNCTION: BF2 0x5c5ff0
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x58];
    int field;
    void setDeviationFactor(int v);
};
void WeaponHudCompTemplate::setDeviationFactor(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setDeviationFactor (0x5c5ff0)
