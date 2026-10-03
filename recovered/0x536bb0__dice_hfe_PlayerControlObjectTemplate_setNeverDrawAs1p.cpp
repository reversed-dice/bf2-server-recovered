// FUNCTION: BF2 0x536bb0
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x3ce];
    bool field;
    void setNeverDrawAs1p(bool v);
};
void PlayerControlObjectTemplate::setNeverDrawAs1p(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setNeverDrawAs1p (0x536bb0)
