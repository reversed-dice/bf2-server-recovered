// FUNCTION: BF2 0x5c5d90
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x54];
    int field;
    void setAltGuiIndex(int v);
};
void WeaponHudCompTemplate::setAltGuiIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setAltGuiIndex (0x5c5d90)
