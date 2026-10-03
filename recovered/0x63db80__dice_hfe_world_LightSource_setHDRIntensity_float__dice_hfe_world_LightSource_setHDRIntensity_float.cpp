// FUNCTION: BF2 0x63db80
namespace dice { namespace hfe { namespace world {

class LightSource {
public:
    void setHDRIntensity(float value);

private:
    /* 0x000 */ unsigned char m_pad[0x258];
    /* 0x258 */ float m_hdrIntensity;
};

void LightSource::setHDRIntensity(float value) {
    m_hdrIntensity = value;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_LightSource_setHDRIntensity_float (0x63db80)