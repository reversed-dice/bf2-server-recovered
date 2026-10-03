// FUNCTION: BF2 0x7856b0
// AIObjectCover::getObjectOutline 0x7856b0 — chaîne deref + virtual
namespace dice { namespace hfe { namespace ai {

typedef void (*VF_OUTLINE)(void*, void*);

void getObjectOutline(void* self, void* out) {
    void* a = *(void**)((char*)self + 0x10);
    void* b = *(void**)((char*)a + 8);
    VF_OUTLINE f = (VF_OUTLINE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(b) + 0x10));
    f(b, out);
}

}}}
