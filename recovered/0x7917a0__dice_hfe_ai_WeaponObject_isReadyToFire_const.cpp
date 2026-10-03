// FUNCTION: BF2 0x7917a0
// WeaponObject::isReadyToFire 0x7917a0 — virtual [0x110] + bool
namespace dice { namespace hfe { namespace ai {

typedef bool (*VF_READY)(void*);

bool isReadyToFire(void* self) {
    void* a = *(void**)((char*)self + 0x10);
    VF_READY f = (VF_READY)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x110));
    return f(a);
}

}}}
