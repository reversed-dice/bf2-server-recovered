// FUNCTION: BF2 0x583980
namespace dice { namespace hfe { namespace world {

struct CameraData {
    unsigned char pad_0x1fc[0x1fc];   // 0x00-0x1fb
    float m_maxSpeed;                 // 0x1fc
};

class OverheadCamera {
public:
    unsigned char pad_0x28[0x28];         // 0x00-0x27
    CameraData* m_data;                   // 0x28
    unsigned char pad_mid[0x358 - 0x30];  // 0x30-0x357
    float m_speedScale;                   // 0x358

    float getMaxSpeed() const;
};

float OverheadCamera::getMaxSpeed() const {
    return m_speedScale * m_data->m_maxSpeed;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_OverheadCamera_getMaxSpeed_const (0x583980)
