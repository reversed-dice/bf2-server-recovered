// FUNCTION: BF2 0x616350
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    unsigned char getCountHit();
};

unsigned char GenericProjectile::getCountHit() {
    return *(unsigned char*)((char*)this + 0x368);
}

} } }
