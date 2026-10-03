// FUNCTION: BF2 0x521420
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    int getAmmoStatus();
};

int PlayerControlObject::getAmmoStatus() {
    return *(int*)((char*)this + 0x4c4);
}

} } }
