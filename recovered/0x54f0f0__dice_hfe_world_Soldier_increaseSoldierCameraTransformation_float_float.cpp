// FUNCTION: BF2 0x54f0f0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice {
namespace hfe {
namespace world {

class Soldier {
public:
    char _pad[0x3d4];
    float m_rotY;
    char _pad2[4];
    float m_rotX;

    float getMouseSpeedMod();
    void updateCameraTransformation();
    void increaseSoldierCameraTransformation(float x, float y);
};

} // namespace world
} // namespace hfe
} // namespace dice

extern const float* g_soldierLookAroundX;
extern const float* g_soldierLookAroundY;

void dice::hfe::world::Soldier::increaseSoldierCameraTransformation(float x, float y)
{
    float mod = getMouseSpeedMod();
    float xVal = x * mod * (*g_soldierLookAroundX);
    const float* pY = g_soldierLookAroundY;
    m_rotX += xVal;
    mod *= y;
    mod *= (*pY);
    m_rotY += mod;
    updateCameraTransformation();
}
