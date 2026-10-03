// FUNCTION: BF2 0x546760
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    float getCurrentAbility() const;
};

float Soldier::getCurrentAbility() const {
    return *(const float*)((const char*)this + 0x4c0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getCurrentAbility_const (0x546760)