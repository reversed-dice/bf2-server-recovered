// FUNCTION: BF2 0x6109a0
namespace dice { namespace hfe { namespace world {
class GenericProjectile {
public:
    void* getLocalPredictedProjectile();
};
void* GenericProjectile::getLocalPredictedProjectile() {
    void* q = *(void**)((char*)this + 0x350);
    return q ? *(void**)((char*)q + 0x8) : 0;
}
} } }
