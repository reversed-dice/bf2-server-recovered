// FUNCTION: BF2 0x57c1c0
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    int getCameraId();
};

int Camera::getCameraId() {
    return *(int*)((char*)this + 0x3c0);
}

} } }
