// FUNCTION: BF2 0x5774c0
namespace dice { namespace hfe { namespace world {

class Camera {
    char _pad[0x28];      // offset 0x00
    char* m_renderData;   // offset 0x28 — pointer to render data block
public:
    float* getStaticSunColor() const;
};

float* Camera::getStaticSunColor() const {
    return reinterpret_cast<float*>(m_renderData + 0x36c);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_getStaticSunColor_const (0x5774c0)