// FUNCTION: BF2 0x5f4ae0
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    unsigned int getLastFiredProjectileId() const;
};

unsigned int FireComp::getLastFiredProjectileId() const {
    return 0xffffffff;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getLastFiredProjectileId_const (0x5f4ae0)
