// FUNCTION: BF2 0x5467e0
namespace dice { namespace hfe { namespace world {

namespace {
    float* g_soldierRadius;
}

class Soldier {
public:
    float getSoldierRadius() const;
};

float Soldier::getSoldierRadius() const {
    return *g_soldierRadius;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_getSoldierRadius_const (0x5467e0)