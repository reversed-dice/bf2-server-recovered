// FUNCTION: BF2 0x57c470
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    int getRef();
};

int Camera::getRef() {
    return *(int*)((char*)this + 0x2c8);
}

} } }
