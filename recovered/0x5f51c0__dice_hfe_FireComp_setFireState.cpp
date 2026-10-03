// FUNCTION: BF2 0x5f51c0
namespace dice { namespace hfe {
class FireComp {
public:
    char _pad[0x15c];
    int field;
    void setFireState(int v);
};
void FireComp::setFireState(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FireComp_setFireState (0x5f51c0)
