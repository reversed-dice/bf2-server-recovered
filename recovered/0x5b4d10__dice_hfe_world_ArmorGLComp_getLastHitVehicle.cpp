// FUNCTION: BF2 0x5b4d10
namespace dice { namespace hfe { namespace world {
class ArmorGLComp {
public:
    void* getLastHitVehicle();
};
void* ArmorGLComp::getLastHitVehicle() {
    void* q = *(void**)((char*)this + 0x48);
    return q ? *(void**)((char*)q + 0x8) : 0;
}
} } }
