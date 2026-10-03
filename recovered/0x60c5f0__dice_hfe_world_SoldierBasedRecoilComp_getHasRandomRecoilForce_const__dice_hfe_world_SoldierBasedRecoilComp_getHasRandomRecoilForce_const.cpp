// FUNCTION: BF2 0x60c5f0
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
public:
    bool getHasRandomRecoilForce() const;
};

bool SoldierBasedRecoilComp::getHasRandomRecoilForce() const {
    return *(bool*)(*(unsigned long long*)((unsigned char const*)this + 0xc0) + 0x48);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_getHasRandomRecoilForce_const (0x60c5f0)