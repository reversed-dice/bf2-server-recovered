// FUNCTION: BF2 0x7b6390
namespace dice { namespace hfe {
class OldConsole {
public:
    char _pad[0x184];
    bool field;
    void setUseRelativePaths(bool v);
};
void OldConsole::setUseRelativePaths(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OldConsole_setUseRelativePaths (0x7b6390)
