// FUNCTION: BF2 0x5c60d0
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x80];
    bool field;
    void setShowInfo(bool v);
};
void WeaponHudCompTemplate::setShowInfo(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setShowInfo (0x5c60d0)
