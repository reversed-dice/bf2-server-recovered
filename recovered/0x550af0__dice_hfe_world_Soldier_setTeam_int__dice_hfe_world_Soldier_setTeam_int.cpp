// FUNCTION: BF2 0x550af0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    void setTeam(unsigned int);
};

void Soldier::setTeam(unsigned int value) {
    *(unsigned int*)((char*)this + 0x354) = value;
}

} } }
