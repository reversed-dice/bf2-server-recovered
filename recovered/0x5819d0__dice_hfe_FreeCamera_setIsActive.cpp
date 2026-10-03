// FUNCTION: BF2 0x5819d0
namespace dice { namespace hfe {
class FreeCamera {
public:
    char _pad[0x2a0];
    bool field;
    void setIsActive(bool v);
};
void FreeCamera::setIsActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FreeCamera_setIsActive (0x5819d0)
