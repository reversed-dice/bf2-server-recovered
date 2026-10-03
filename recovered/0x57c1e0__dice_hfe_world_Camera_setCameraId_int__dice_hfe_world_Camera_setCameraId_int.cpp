// FUNCTION: BF2 0x57c1e0
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    void setCameraId(unsigned int);
};

void Camera::setCameraId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x3c0) = value;
}

} } }
