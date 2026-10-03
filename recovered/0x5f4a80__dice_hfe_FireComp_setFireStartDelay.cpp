// FUNCTION: BF2 0x5f4a80
namespace dice { namespace hfe {
class FireComp {
public:
    char _pad[0x88];
    bool field;
    void setFireStartDelay(bool v);
};
void FireComp::setFireStartDelay(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FireComp_setFireStartDelay (0x5f4a80)
