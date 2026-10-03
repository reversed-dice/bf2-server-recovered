// FUNCTION: BF2 0x5c5f50
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x83];
    bool field;
    void setHasMag(bool v);
};
void WeaponHudCompTemplate::setHasMag(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setHasMag (0x5c5f50)
