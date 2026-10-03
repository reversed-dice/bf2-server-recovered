// FUNCTION: BF2 0x78e950
// AIObjectReal::getPlayerControlObjectId 0x78e950 — chaîne deref + virtual
namespace dice { namespace hfe { namespace ai {

typedef void* (*VF_GETOBJ)(void*, int);
typedef int (*VF_GETID)(void*);

int getPlayerControlObjectId(void* self) {
    void* a = *(void**)((char*)self + 0x20);
    VF_GETOBJ fo = (VF_GETOBJ)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x18));
    void* b = fo(a, *(int*)0xc7ce6c);
    if (b == 0)
        return 0;
    VF_GETID fi = (VF_GETID)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(b) + 0x60));
    return fi(b);
}

}}}
