extern "C" int g_iid;
typedef void* (*vfn1)(void*, int);
typedef int (*vfn2)(void*);

extern "C" int getKitType_78c330(void* self)
{
    void* p = ((vfn1)(*(void***)(*(void**)((char*)self + 0x20)))[0x18/8])(*(void**)((char*)self + 0x20), g_iid);
    if (p) {
        return ((vfn2)(*(void***)p)[0xb0/8])(p);
    }
    return 0xd;
}
