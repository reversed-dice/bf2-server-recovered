// FUNCTION: BF2 0x5c6110
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x89];
    bool field;
    void setDisplaySelectOnActivation(bool v);
};
void WeaponHudCompTemplate::setDisplaySelectOnActivation(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setDisplaySelectOnActivation (0x5c6110)
