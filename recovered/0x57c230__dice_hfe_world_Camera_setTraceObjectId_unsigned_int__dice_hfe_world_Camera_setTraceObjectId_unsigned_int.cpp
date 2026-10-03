// FUNCTION: BF2 0x57c230
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    void setTraceObjectId(unsigned int);
};

void Camera::setTraceObjectId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x374) = value;
}

} } }
