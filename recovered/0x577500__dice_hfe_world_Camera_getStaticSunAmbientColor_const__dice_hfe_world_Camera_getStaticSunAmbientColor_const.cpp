// FUNCTION: BF2 0x577500
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    unsigned long long getStaticSunAmbientColor() const;
};

unsigned long long Camera::getStaticSunAmbientColor() const {
    return *(unsigned long long*)((const char*)this + 0x28) + 0x38cULL;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_getStaticSunAmbientColor_const (0x577500)