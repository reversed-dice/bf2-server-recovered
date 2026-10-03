// FUNCTION: BF2 0x5212b0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned char getObjectSpawnerHolding() const;
};

unsigned char PlayerControlObject::getObjectSpawnerHolding() const {
    return *(unsigned char*)((char*)this + 0x3f0);
}

} } }
