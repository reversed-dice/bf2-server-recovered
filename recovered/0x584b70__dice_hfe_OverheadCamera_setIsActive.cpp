// FUNCTION: BF2 0x584b70
namespace dice { namespace hfe {
class OverheadCamera {
public:
    char _pad[0x290];
    bool field;
    void setIsActive(bool v);
};
void OverheadCamera::setIsActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_OverheadCamera_setIsActive (0x584b70)
