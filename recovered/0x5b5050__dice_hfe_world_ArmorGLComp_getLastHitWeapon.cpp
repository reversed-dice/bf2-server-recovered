// FUNCTION: BF2 0x5b5050
namespace dice { namespace hfe { namespace world {
class ArmorGLComp {
public:
    void* getLastHitWeapon();
};
void* ArmorGLComp::getLastHitWeapon() {
    void* q = *(void**)((char*)this + 0x40);
    return q ? *(void**)((char*)q + 0x8) : 0;
}
} } }
