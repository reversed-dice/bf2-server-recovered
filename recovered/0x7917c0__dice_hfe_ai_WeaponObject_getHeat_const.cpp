// FUNCTION: BF2 0x7917c0
// WeaponObject::getHeat 0x7917c0 — virtual [0x48]
namespace dice { namespace hfe { namespace ai {

typedef float (*VF_HEAT)(void*);

float getHeat(void* self) {
    void* a = *(void**)((char*)self + 0x10);
    VF_HEAT f = (VF_HEAT)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x48));
    return f(a);
}

}}}
