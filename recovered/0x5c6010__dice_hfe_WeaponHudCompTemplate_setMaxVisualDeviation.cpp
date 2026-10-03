// FUNCTION: BF2 0x5c6010
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x5c];
    int field;
    void setMaxVisualDeviation(int v);
};
void WeaponHudCompTemplate::setMaxVisualDeviation(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setMaxVisualDeviation (0x5c6010)
