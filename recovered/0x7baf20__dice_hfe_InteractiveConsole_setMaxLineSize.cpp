// FUNCTION: BF2 0x7baf20
namespace dice { namespace hfe {
class InteractiveConsole {
public:
    char _pad[0x1c0];
    int field;
    void setMaxLineSize(int v);
};
void InteractiveConsole::setMaxLineSize(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_InteractiveConsole_setMaxLineSize (0x7baf20)
