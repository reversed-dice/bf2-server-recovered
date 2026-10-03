// FUNCTION: BF2 0x60c0b0
namespace dice { namespace hfe { namespace world {

class RecoilComp {
public:
    bool requestFire(bool, bool) const;
};

bool RecoilComp::requestFire(bool, bool) const { return true; }

} } }
// REVERSED_FUNCTION: dice_hfe_world_RecoilComp_requestFire_bool_bool (0x60c0b0)