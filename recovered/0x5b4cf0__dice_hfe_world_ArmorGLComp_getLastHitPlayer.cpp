// FUNCTION: BF2 0x5b4cf0
namespace dice { namespace hfe { namespace world {

class ArmorGLComp {
public:
    void* getLastHitPlayer();
};

void* ArmorGLComp::getLastHitPlayer() {
    void* q = *(void**)((char*)this + 0x38);
    return q ? *(void**)((char*)q + 0x8) : 0;
}

} } }
