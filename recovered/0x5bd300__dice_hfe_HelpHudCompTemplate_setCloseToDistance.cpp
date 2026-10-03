// FUNCTION: BF2 0x5bd300
namespace dice { namespace hfe {
class HelpHudCompTemplate {
public:
    char _pad[0x90];
    int field;
    void setCloseToDistance(int v);
};
void HelpHudCompTemplate::setCloseToDistance(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_HelpHudCompTemplate_setCloseToDistance (0x5bd300)
