// FUNCTION: BF2 0x577450
namespace dice { namespace hfe { namespace world {

struct CameraSceneData {
    // offset 0x000 - 0x2ab: other members
    unsigned char field_0x000[0x2ac];
    // offset 0x2ac
    unsigned char m_toggleMouseLook;
};

class Camera {
public:
    unsigned char getToggleMouseLook() const;
private:
    // offset 0x00 - 0x27: vtable ptr + other members
    unsigned char field_0x00[0x28];
    // offset 0x28
    CameraSceneData* m_scene;
};

unsigned char Camera::getToggleMouseLook() const {
    return m_scene->m_toggleMouseLook;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_getToggleMouseLook (0x577450)