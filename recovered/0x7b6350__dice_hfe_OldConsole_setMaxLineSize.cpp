// FUNCTION: BF2 0x7b6350
namespace dice { namespace hfe {
class OldConsole {
public:
    char _pad[0x160];
    int field;
    void setMaxLineSize(int v);
};
void OldConsole::setMaxLineSize(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OldConsole_setMaxLineSize (0x7b6350)
