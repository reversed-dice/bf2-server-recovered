// FUNCTION: BF2 0x57c1a0
namespace dice { namespace hfe {
class Camera {
public:
    char _pad[0x300];
    bool field;
    void setIsActive(bool v);
};
void Camera::setIsActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Camera_setIsActive (0x57c1a0)
