// FUNCTION: BF2 0x7b63b0
namespace dice { namespace hfe {
class OldConsole {
public:
    char _pad[0x198];
    bool field;
    void setAllowMultipleFileLoad(bool v);
};
void OldConsole::setAllowMultipleFileLoad(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OldConsole_setAllowMultipleFileLoad (0x7b63b0)
