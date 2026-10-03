// FUNCTION: BF2 0x791980
// WeaponObject::getWeaponState 0x791980 — virtual [0x2c8]
namespace dice { namespace hfe { namespace ai {

typedef int (*VF_STATE)(void*);

int getWeaponState(void* self) {
    void* a = *(void**)((char*)self + 0x10);
    VF_STATE f = (VF_STATE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x2c8));
    return f(a);
}

}}}
