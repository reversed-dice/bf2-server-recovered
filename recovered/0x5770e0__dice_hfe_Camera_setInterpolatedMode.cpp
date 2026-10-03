// FUNCTION: BF2 0x5770e0
namespace dice { namespace hfe {
class Camera {
public:
    char _pad[0x3c4];
    bool field;
    void setInterpolatedMode(bool v);
};
void Camera::setInterpolatedMode(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Camera_setInterpolatedMode (0x5770e0)
