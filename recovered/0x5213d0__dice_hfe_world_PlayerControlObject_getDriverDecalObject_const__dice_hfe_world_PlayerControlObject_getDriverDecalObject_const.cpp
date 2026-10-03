// FUNCTION: BF2 0x5213d0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    void* getDriverDecalObject() const;
};

void* PlayerControlObject::getDriverDecalObject() const {
    return *(void**)((char*)this + 0x440);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getDriverDecalObject_const (0x5213d0)