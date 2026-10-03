// FUNCTION: BF2 0x60c5c0
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
public:
    unsigned char getGoBackOnRecoil() const;
};

unsigned char SoldierBasedRecoilComp::getGoBackOnRecoil() const {
    return *(unsigned char*)(*(long*)((char*)this + 0xc0) + 0x49);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_getGoBackOnRecoil_const (0x60c5c0)