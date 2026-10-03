// FUNCTION: BF2 0x61f2d0
namespace dice { namespace hfe {
class DefaultDetonationCompTemplate {
public:
    char _pad[0x81];
    bool field;
    void setShowMineIndicationIcon(bool v);
};
void DefaultDetonationCompTemplate::setShowMineIndicationIcon(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DefaultDetonationCompTemplate_setShowMineIndicationIcon (0x61f2d0)
