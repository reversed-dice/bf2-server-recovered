// FUNCTION: BF2 0x5c36c0
namespace dice { namespace hfe {
class WarningHudCompTemplate {
public:
    char _pad[0x38];
    int field;
    void setWarningType(int v);
};
void WarningHudCompTemplate::setWarningType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WarningHudCompTemplate_setWarningType (0x5c36c0)
