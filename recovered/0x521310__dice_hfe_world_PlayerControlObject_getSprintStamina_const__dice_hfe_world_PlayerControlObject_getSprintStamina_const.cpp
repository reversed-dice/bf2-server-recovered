// FUNCTION: BF2 0x521310
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    float getSprintStamina() const;
};

float PlayerControlObject::getSprintStamina() const
{
    return *(const float*)((const char*)this + 0x48C);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getSprintStamina_const (0x521310)