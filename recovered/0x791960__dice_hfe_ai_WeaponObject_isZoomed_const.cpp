// FUNCTION: BF2 0x791960
// WeaponObject::isZoomed 0x791960 — virtual [0x210] + bool
namespace dice { namespace hfe { namespace ai {

typedef int (*VF_ZOOM)(void*);

bool isZoomed(void* self) {
    void* a = *(void**)((char*)self + 0x10);
    VF_ZOOM f = (VF_ZOOM)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x210));
    return f(a) != 0;
}

}}}
