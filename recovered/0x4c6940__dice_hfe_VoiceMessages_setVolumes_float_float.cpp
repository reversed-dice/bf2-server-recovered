// FUNCTION: BF2 0x4c6940
namespace dice { namespace hfe {

class VoiceMessages {
public:
    void setVolumes(float v1, float v2);

    char _pad[0x18];
    float m_vol1;
    float m_vol2;
};

void VoiceMessages::setVolumes(float v1, float v2)
{
    if (v1 < 0.0f) {
        v1 = 0.0f;
    } else if (v1 > 1.0f) {
        v1 = 1.0f;
    }
    m_vol1 = v1;

    if (v2 < 0.0f) {
        v2 = 0.0f;
    } else if (v2 > 1.0f) {
        v2 = 1.0f;
    }
    m_vol2 = v2;
}

} }
// REVERSED_FUNCTION: dice_hfe_VoiceMessages_setVolumes_float_float (0x4c6940)
