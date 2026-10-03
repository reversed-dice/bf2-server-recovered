// FUNCTION: BF2 0x494dc0
namespace dice { namespace hfe {
class Player {
public:
    void updateCameraShake(float shake);

    char pad_0x00[0x218];
    float m_cameraShake;
    unsigned int m_cameraShakeType;
};
void Player::updateCameraShake(float shake) {
    m_cameraShake = shake;
    m_cameraShakeType = 2;
}
} }
// REVERSED_FUNCTION: dice::hfe::Player::updateCameraShake_float (0x494dc0)