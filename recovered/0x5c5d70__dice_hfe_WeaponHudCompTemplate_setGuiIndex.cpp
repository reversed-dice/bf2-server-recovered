// FUNCTION: BF2 0x5c5d70
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x50];
    int field;
    void setGuiIndex(int v);
};
void WeaponHudCompTemplate::setGuiIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setGuiIndex (0x5c5d70)
