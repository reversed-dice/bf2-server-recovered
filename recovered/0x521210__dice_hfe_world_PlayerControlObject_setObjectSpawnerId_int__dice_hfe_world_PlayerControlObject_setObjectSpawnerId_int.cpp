// FUNCTION: BF2 0x521210
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    void setObjectSpawnerId(unsigned int);
};

void PlayerControlObject::setObjectSpawnerId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x3ec) = value;
}

} } }
