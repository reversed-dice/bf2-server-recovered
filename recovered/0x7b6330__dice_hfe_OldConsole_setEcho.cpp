// FUNCTION: BF2 0x7b6330
namespace dice { namespace hfe {
class OldConsole {
public:
    char _pad[0x222];
    bool field;
    void setEcho(bool v);
};
void OldConsole::setEcho(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OldConsole_setEcho (0x7b6330)
