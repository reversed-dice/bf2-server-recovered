// FUNCTION: BF2 0x57c1a0
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    void setIsActive(unsigned char);
};

void Camera::setIsActive(unsigned char value) {
    *(unsigned char*)((char*)this + 0x300) = value;
}

} } }
