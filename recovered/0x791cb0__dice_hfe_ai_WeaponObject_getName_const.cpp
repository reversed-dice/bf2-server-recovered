// FUNCTION: BF2 0x791cb0
// WeaponObject::getName 0x791cb0 — chaîne de deref
namespace dice { namespace hfe { namespace ai {

typedef void* (*VF_GETOBJ)(void*, int);
typedef void* (*VF_GETNAME)(void*);

void* getName(void* self) {
    void* a = *(void**)((char*)self + 0x10);
    VF_GETOBJ fo = (VF_GETOBJ)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(a) + 0x18));
    void* b = fo(a, *(int*)0xc7d110);
    void* c = *(void**)((char*)b + 0x28);
    VF_GETNAME fn = (VF_GETNAME)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(c) + 0x58));
    return fn(c);
}

}}}
