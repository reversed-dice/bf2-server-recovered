// FUNCTION: BF2 0x5465e0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    unsigned char getIsSprinting() const;
};

unsigned char Soldier::getIsSprinting() const {
    return *(unsigned char*)((char*)this + 0x516);
}

} } }
