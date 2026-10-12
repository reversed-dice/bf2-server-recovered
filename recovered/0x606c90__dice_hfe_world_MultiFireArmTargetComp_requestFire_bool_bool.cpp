// FUNCTION: BF2 0x606c90
namespace dice { namespace hfe { namespace world {

class TargetComp {
public:
    char requestFire(bool a0, bool a1);
};

class MultiFireArmTargetComp : public TargetComp {
public:
    bool requestFire(bool a0, bool a1);
};

bool MultiFireArmTargetComp::requestFire(bool a0, bool a1)
{
    void* p = *(void**)((char*)this + 0x90);
    void* q = *(void**)((char*)p + 0x30);
    if (*(void**)((char*)q - 0x18) != 0 && *(void**)((char*)this + 0x38) == 0) {
        char local[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
        ((void (*)(void*, void*))(*(void***)this)[0x80 / 8])(this, local);
    }
    return ((TargetComp*)this)->requestFire(a0, a1) != 0;
}

} } }
