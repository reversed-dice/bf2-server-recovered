// FUNCTION: BF2 0x57c180
namespace dice { namespace hfe { namespace world {

class Camera {
public:
    unsigned char isActive() const;
};

unsigned char Camera::isActive() const {
    return *(unsigned char*)((char*)this + 0x300);
}

} } }
