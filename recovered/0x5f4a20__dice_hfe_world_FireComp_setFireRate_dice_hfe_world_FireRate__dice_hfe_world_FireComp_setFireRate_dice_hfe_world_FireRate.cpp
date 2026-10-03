// FUNCTION: BF2 0x5f4a20
namespace dice { namespace hfe { namespace world {

class FireRate {
public:
    unsigned int value;
};

class FireComp {
public:
    void setFireRate(FireRate rate);
private:
    char __pad0[0x40];
    FireRate __fireRate;
};

void FireComp::setFireRate(FireRate rate) {
    __fireRate = rate;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_setFireRate_dice_hfe_world_FireRate (0x5f4a20)