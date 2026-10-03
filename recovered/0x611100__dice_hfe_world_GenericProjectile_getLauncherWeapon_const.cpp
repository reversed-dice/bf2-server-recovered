// FUNCTION: BF2 0x611100
namespace dice { namespace hfe { namespace world {
class GenericProjectile {
public:
    void* getLauncherWeapon() const;
};
void* GenericProjectile::getLauncherWeapon() const {
    void* q = *(void**)((char*)this + 0x2a8);
    return q ? *(void**)((char*)q + 0x8) : 0;
}
} } }
