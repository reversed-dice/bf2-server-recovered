// FUNCTION: BF2 0x5508f0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    unsigned char isOccupied() const;
};

unsigned char Soldier::isOccupied() const {
    return *(unsigned char*)((char*)this + 0x350);
}

} } }
