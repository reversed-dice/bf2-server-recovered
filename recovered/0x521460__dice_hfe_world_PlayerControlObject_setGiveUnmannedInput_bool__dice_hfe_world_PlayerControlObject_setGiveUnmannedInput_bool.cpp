// FUNCTION: BF2 0x521460
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    void setGiveUnmannedInput(unsigned char);
};

void PlayerControlObject::setGiveUnmannedInput(unsigned char value) {
    *(unsigned char*)((char*)this + 0x5f8) = value;
}

} } }
