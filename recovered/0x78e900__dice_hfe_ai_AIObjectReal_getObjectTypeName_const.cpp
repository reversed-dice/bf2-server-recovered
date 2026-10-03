// FUNCTION: BF2 0x78e900
// AIObjectReal::getObjectTypeName 0x78e900 — chaîne deref + virtual
namespace dice { namespace hfe { namespace ai {

typedef void* (*VF_GETNAME)(void*);

void* getObjectTypeName(void* self) {
    void* a = *(void**)((char*)self + 0x20);
    void* b = *(void**)((char*)a + 0x28);
    VF_GETNAME f = (VF_GETNAME)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(b) + 0x58));
    return f(b);
}

}}}
