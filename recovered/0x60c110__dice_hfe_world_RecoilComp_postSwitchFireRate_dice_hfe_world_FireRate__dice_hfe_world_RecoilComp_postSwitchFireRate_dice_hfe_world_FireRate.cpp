// FUNCTION: BF2 0x60c110
namespace dice { namespace hfe { namespace world {

class FireRate { public: FireRate() {} };
class RecoilComp { public: void postSwitchFireRate(FireRate&); };

void RecoilComp::postSwitchFireRate(FireRate&) {
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RecoilComp_postSwitchFireRate_dice_hfe_world_FireRate (0x60c110)