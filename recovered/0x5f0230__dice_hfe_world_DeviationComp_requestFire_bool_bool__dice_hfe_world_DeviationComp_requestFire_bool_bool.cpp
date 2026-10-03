// FUNCTION: BF2 0x5f0230
namespace dice { namespace hfe { namespace world {

class DeviationComp {
public:
    unsigned int requestFire(bool, bool);
};

unsigned int DeviationComp::requestFire(bool, bool) {
    return 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DeviationComp_requestFire_bool_bool (0x5f0230)