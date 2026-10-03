// FUNCTION: BF2 0x60c5e0
namespace dice { namespace hfe { namespace world {

class SoldierBasedRecoilComp {
public:
    void* getRandomRecoilForceLeftRight() const;
};

void* SoldierBasedRecoilComp::getRandomRecoilForceLeftRight() const {
    return (void*)(*(unsigned long long*)((unsigned char const*)this + 0xC0) + 0x30);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierBasedRecoilComp_getRandomRecoilForceLeftRight_const (0x60c5e0)