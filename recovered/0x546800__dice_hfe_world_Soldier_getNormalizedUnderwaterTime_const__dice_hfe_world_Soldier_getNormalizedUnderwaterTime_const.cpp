// FUNCTION: BF2 0x546800
namespace dice { namespace hfe { namespace world {

extern float g_underwaterNormalizedTime;

class Soldier {
public:
    float getNormalizedUnderwaterTime() const;
};

float Soldier::getNormalizedUnderwaterTime() const {
    return g_underwaterNormalizedTime;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getNormalizedUnderwaterTime_const (0x546800)