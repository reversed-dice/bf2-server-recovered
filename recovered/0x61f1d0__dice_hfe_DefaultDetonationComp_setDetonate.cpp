// FUNCTION: BF2 0x61f1d0
namespace dice { namespace hfe {
class DefaultDetonationComp {
public:
    char _pad[0x38];
    bool field;
    void setDetonate(bool v);
};
void DefaultDetonationComp::setDetonate(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DefaultDetonationComp_setDetonate (0x61f1d0)
