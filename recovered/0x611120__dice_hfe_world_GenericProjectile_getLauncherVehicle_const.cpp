// FUNCTION: BF2 0x611120
namespace dice { namespace hfe { namespace world {
class GenericProjectile {
public:
    void* getLauncherVehicle() const;
};
void* GenericProjectile::getLauncherVehicle() const {
    void* q = *(void**)((char*)this + 0x2b8);
    return q ? *(void**)((char*)q + 0x8) : 0;
}
} } }
