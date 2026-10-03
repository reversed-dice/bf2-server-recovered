// FUNCTION: BF2 0x5c5d30
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x81];
    bool field;
    void setEnableMouse(bool v);
};
void WeaponHudCompTemplate::setEnableMouse(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setEnableMouse (0x5c5d30)
