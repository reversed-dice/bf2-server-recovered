// FUNCTION: BF2 0x550ee0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    unsigned char getIsSkyDiving() const;
};

unsigned char Soldier::getIsSkyDiving() const {
    return *(unsigned char*)((char*)this + 0x4b0);
}

} } }
