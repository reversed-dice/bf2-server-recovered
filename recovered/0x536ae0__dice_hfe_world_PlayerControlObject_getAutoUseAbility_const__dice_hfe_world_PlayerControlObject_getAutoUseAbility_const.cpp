// FUNCTION: BF2 0x536ae0
// dice_hfe_world_PlayerControlObject_getAutoUseAbility_const::getAutoUseAbility (0x536ae0)

namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned int getAutoUseAbility() const;
};

unsigned int PlayerControlObject::getAutoUseAbility() const
{
    return ((unsigned char*)(*(unsigned long long*)((unsigned char*)this + 0x250)))[0x3b6];
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getAutoUseAbility_const (0x536ae0)