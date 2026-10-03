// FUNCTION: BF2 0x611060
namespace dice { namespace hfe { namespace world {
class GenericProjectile {
public:
    void* getPlayer() const;
};
void* GenericProjectile::getPlayer() const {
    void* q = *(void**)((char*)this + 0x2b0);
    return q ? *(void**)((char*)q + 0x8) : 0;
}
} } }
