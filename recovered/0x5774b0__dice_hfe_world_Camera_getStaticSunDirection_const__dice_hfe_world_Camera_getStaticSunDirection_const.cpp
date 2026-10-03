// FUNCTION: BF2 0x5774b0
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    unsigned char* getStaticSunDirection() const;

private:
    unsigned char m_pad[0x28];
    unsigned char* m_renderData;
};

unsigned char* Camera::getStaticSunDirection() const {
    return m_renderData + 0x360;
}

} } } // namespace
// REVERSED_FUNCTION: dice_hfe_world_Camera_getStaticSunDirection_const (0x5774b0)