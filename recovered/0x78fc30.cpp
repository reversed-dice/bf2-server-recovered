extern "C" void* g_mgr;
typedef void (*vfn1)(void*, void*);
typedef int (*vfn2)(void*, int);
extern "C" void parentDtor_78fed0(void*);

extern "C" void dtor_78fc30(void* self)
{
    *(void**)((char*)self + 0x0) = (void*)0xba63d0;
    ((vfn1)(*(void***)(*(void**)((char*)self + 0x70)))[0x220/8])(*(void**)((char*)self + 0x70), self);
    if (((vfn2)(*(void***)g_mgr)[0x10/8])(g_mgr, *(int*)((char*)self + 0x64))) {
        ((vfn2)(*(void***)g_mgr)[0x20/8])(g_mgr, *(int*)((char*)self + 0x64));
    }
    parentDtor_78fed0(self);
}
