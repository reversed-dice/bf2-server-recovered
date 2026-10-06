// FUNCTION: BF2 0x63dca0
namespace dice { namespace hfe { namespace world {

class LightSource {
public:
    void setAttenuationIntensity(float val);

    char _pad[0x284];
    float m_attenuationIntensity;
    char _pad2[0x470 - 0x288];
    bool m_hasAttenuation;
};

void LightSource::setAttenuationIntensity(float val)
{
    if (val < 0.0f) {
        val = 0.0f;
    } else if (val > 1.0f) {
        val = 1.0f;
    }
    m_hasAttenuation = true;
    m_attenuationIntensity = val;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_setAttenuationIntensity_float (0x63dca0)
