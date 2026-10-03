// FUNCTION: BF2 0x7baf00
namespace dice { namespace hfe {
class InteractiveConsole {
public:
    char _pad[0x24e];
    bool field;
    void setEcho(bool v);
};
void InteractiveConsole::setEcho(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_InteractiveConsole_setEcho (0x7baf00)
