// FUNCTION: BF2 0x7917d0
// WeaponObject::usesHeat 0x7917d0 — virtual [0x60] + bool
namespace dice { namespace hfe { namespace ai {

typedef bool (*VF_USESHEAT)(void*);

bool usesHeat(void* self) {
    void* a = *(void**)((char*)self + 0x10);
    VF_USESHEAT f = (VF_USESHEAT)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x60));
    return f(a);
}

}}}
