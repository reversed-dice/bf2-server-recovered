// FUNCTION: BF2 0x57c250
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    int getTraceObjectId();
};

int Camera::getTraceObjectId() {
    return *(int*)((char*)this + 0x374);
}

} } }
