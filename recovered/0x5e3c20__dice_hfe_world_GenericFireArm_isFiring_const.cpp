// FUNCTION: BF2 0x5e3c20
// GenericFireArm::isFiring 0x5e3c20 — état de tir du soldier
namespace dice { namespace hfe { namespace world {

typedef int (*VF_GETFIRE)(void*);

bool isFiring(void* self) {
    void* s = *(void**)((char*)self + 0x290);
    if (s == 0)
        return false;
    VF_GETFIRE f = (VF_GETFIRE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(s) + 0x1b0));
    return f(s) > 0;
}

}}}
