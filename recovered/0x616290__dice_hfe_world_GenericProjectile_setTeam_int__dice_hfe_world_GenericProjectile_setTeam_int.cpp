// FUNCTION: BF2 0x616290
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    void setTeam(unsigned int);
};

void GenericProjectile::setTeam(unsigned int value) {
    *(unsigned int*)((char*)this + 0x2c0) = value;
}

} } }
