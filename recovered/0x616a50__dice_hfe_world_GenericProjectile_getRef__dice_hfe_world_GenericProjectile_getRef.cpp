// FUNCTION: BF2 0x616a50
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    int getRef();
};

int GenericProjectile::getRef() {
    return *(int*)((char*)this + 0x250);
}

} } }
