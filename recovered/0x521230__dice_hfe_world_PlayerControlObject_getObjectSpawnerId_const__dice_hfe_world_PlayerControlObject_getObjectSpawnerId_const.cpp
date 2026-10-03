// FUNCTION: BF2 0x521230
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    int getObjectSpawnerId() const;
};

int PlayerControlObject::getObjectSpawnerId() const {
    return *(int*)((char*)this + 0x3ec);
}

} } }
