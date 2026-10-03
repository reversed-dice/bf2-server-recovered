// FUNCTION: BF2 0x5212f0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    void setIsSprinting(unsigned char);
};

void PlayerControlObject::setIsSprinting(unsigned char value) {
    *(unsigned char*)((char*)this + 0x492) = value;
}

} } }
