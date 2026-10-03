// FUNCTION: BF2 0x521440
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    void setAmmoStatus(unsigned int);
};

void PlayerControlObject::setAmmoStatus(unsigned int value) {
    *(unsigned int*)((char*)this + 0x4c4) = value;
}

} } }
