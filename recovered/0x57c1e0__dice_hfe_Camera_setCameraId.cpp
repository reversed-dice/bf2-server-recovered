// FUNCTION: BF2 0x57c1e0
namespace dice { namespace hfe {
class Camera {
public:
    char _pad[0x3c0];
    int field;
    void setCameraId(int v);
};
void Camera::setCameraId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Camera_setCameraId (0x57c1e0)
