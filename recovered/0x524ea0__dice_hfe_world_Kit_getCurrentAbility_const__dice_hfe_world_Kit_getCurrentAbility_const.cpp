// FUNCTION: BF2 0x524ea0
namespace dice { namespace hfe { namespace world {

class Kit {
public:
    float getCurrentAbility() const;
};

float Kit::getCurrentAbility() const {
    return *(const float*)((const char*)this + 0x2c0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_getCurrentAbility_const (0x524ea0)