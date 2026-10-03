// FUNCTION: BF2 0x581ac0
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    unsigned int isOccupied() const;
};

unsigned int FreeCamera::isOccupied() const {
    return 1;
}

} } }
