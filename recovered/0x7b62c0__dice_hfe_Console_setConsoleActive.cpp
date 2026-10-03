// FUNCTION: BF2 0x7b62c0
namespace dice { namespace hfe {
class Console {
public:
    char _pad[0x8];
    bool field;
    void setConsoleActive(bool v);
};
void Console::setConsoleActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Console_setConsoleActive (0x7b62c0)
