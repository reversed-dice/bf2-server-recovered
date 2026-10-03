// FUNCTION: BF2 0x57c230
namespace dice { namespace hfe {
class Camera {
public:
    char _pad[0x374];
    int field;
    void setTraceObjectId(int v);
};
void Camera::setTraceObjectId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Camera_setTraceObjectId (0x57c230)
