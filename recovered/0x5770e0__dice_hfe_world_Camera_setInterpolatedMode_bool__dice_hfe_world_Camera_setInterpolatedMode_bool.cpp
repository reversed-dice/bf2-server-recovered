// FUNCTION: BF2 0x5770e0
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    void setInterpolatedMode(unsigned char);
};

void Camera::setInterpolatedMode(unsigned char value) {
    *(unsigned char*)((char*)this + 0x3c4) = value;
}

} } }
