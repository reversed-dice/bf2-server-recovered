// FUNCTION: BF2 0x5212d0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned char getIsSprinting() const;
};

unsigned char PlayerControlObject::getIsSprinting() const {
    return *(unsigned char*)((char*)this + 0x492);
}

} } }
