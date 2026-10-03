// FUNCTION: BF2 0x5f4a60
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    unsigned char getFireStartDelay() const;
};

unsigned char FireComp::getFireStartDelay() const {
    return *(unsigned char*)((const char*)this + 0x88);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getFireStartDelay_const (0x5f4a60)