// FUNCTION: BF2 0x5819d0
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    void setIsActive(unsigned char);
};

void FreeCamera::setIsActive(unsigned char value) {
    *(unsigned char*)((char*)this + 0x2a0) = value;
}

} } }
