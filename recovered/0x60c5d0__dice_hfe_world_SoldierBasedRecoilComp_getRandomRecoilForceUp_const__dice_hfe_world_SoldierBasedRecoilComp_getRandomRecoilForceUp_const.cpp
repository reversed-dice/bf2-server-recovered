// FUNCTION: BF2 0x60c5d0
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
public:
    unsigned long long getRandomRecoilForceUp() const;
};

unsigned long long SoldierBasedRecoilComp::getRandomRecoilForceUp() const {
    return *reinterpret_cast<unsigned long long*>(
        reinterpret_cast<unsigned long long>(this) + 0xc0
    ) + 0x18;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_getRandomRecoilForceUp_const (0x60c5d0)