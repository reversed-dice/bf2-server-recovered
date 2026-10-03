// FUNCTION: BF2 0x550c70
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    float getSprintStamina() const;
};

float Soldier::getSprintStamina() const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x510);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getSprintStamina_const (0x550c70)