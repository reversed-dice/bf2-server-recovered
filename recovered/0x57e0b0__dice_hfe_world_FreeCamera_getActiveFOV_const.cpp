// FUNCTION: BF2 0x57e0b0
namespace dice { namespace hfe { namespace world {
class FreeCamera {
public:
    char _pad[0x28];
    void* m_28;
    char _pad2[0x2f0];
    int m_320;
    float getActiveFOV() const;
};
float FreeCamera::getActiveFOV() const {
    float* p = (float*)m_28;
    return (m_320 == 1) ? p[0x7f] : p[0x7e];
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FreeCamera_getActiveFOV_const (0x57e0b0)
