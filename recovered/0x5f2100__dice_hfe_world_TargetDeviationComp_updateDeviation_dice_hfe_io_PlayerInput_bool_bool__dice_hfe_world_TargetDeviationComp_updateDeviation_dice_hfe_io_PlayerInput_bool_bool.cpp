// FUNCTION: BF2 0x5f2100
namespace dice { namespace hfe { namespace io {
class PlayerInput;
} } }

namespace dice { namespace hfe { namespace world {

class TargetDeviationComp {
public:
    void updateDeviation(dice::hfe::io::PlayerInput*, bool, bool);
};

void TargetDeviationComp::updateDeviation(dice::hfe::io::PlayerInput*, bool, bool) {
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetDeviationComp_updateDeviation_dice_hfe_io_PlayerInput_bool_bool (0x5f2100)