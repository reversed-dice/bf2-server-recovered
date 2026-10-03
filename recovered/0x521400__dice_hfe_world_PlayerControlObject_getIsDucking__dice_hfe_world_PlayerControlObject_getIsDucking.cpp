// FUNCTION: BF2 0x521400
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned char getIsDucking();
};

unsigned char PlayerControlObject::getIsDucking() {
    return *(unsigned char*)((char*)this + 0x4c0);
}

} } }
