// FUNCTION: BF2 0x5819b0
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    unsigned char isActive() const;
};

unsigned char FreeCamera::isActive() const {
    return *(unsigned char*)((char*)this + 0x2a0);
}

} } }
