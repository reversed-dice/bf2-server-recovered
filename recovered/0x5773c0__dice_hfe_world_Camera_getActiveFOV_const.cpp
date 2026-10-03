// FUNCTION: BF2 0x5773c0
namespace dice { namespace hfe { namespace world {
class Camera {
public:
    char _pad[0x28];
    void* m_28;
    char _pad2[0x29c];
    int m_2cc;
    float getActiveFOV() const;
};
float Camera::getActiveFOV() const {
    float* p = (float*)m_28;
    return (m_2cc == 1) ? p[0xd6] : p[0xd5];
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_getActiveFOV_const (0x5773c0)
