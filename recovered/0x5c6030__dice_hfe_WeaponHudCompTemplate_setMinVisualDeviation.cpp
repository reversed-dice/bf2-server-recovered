// FUNCTION: BF2 0x5c6030
namespace dice { namespace hfe {
class WeaponHudCompTemplate {
public:
    char _pad[0x60];
    int field;
    void setMinVisualDeviation(int v);
};
void WeaponHudCompTemplate::setMinVisualDeviation(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WeaponHudCompTemplate_setMinVisualDeviation (0x5c6030)
