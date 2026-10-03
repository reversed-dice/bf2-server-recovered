// FUNCTION: BF2 0x7917f0
// WeaponObject::hasHeat 0x7917f0 — virtual [0x58] + bool
namespace dice { namespace hfe { namespace ai {

typedef bool (*VF_HASHEAT)(void*);

bool hasHeat(void* self) {
    void* a = *(void**)((char*)self + 0x10);
    VF_HASHEAT f = (VF_HASHEAT)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x58));
    return f(a);
}

}}}
