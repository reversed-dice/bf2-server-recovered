// FUNCTION: BF2 0x7a81d0
namespace dice { namespace hfe {
class OldConsole {
public:
    char _pad[0x19c];
    int field;
    void setAccess(int v);
};
void OldConsole::setAccess(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OldConsole_setAccess (0x7a81d0)
