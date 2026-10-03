// FUNCTION: BF2 0x536ab0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned int getSpecialToggleWeaponInput() const;
};

unsigned int PlayerControlObject::getSpecialToggleWeaponInput() const {
    return *(unsigned int*)(*(long*)((char*)this + 0x250) + 0x3b8);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getSpecialToggleWeaponInput_const (0x536ab0)