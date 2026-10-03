extern "C" void fn_55f9b0(void*, int, int);

typedef void* (*vfn380)(void*);
typedef int (*vfnA8)(void*);

extern "C" void enableTargetObject_6039f0(void* self, int x)
{
    void* t = *(void**)((char*)self + 0x48);
    if (t) {
        void* r = *(void**)((char*)t + 0x8);
        if (r) {
            fn_55f9b0(r, 1, 1);
            void* o = *(void**)((char*)self + 0x18);
            void* a = ((vfn380)(*(void***)o)[0x380/8])(o);
            *(int*)((char*)r + 0x24c) = ((vfnA8)(*(void***)a)[0xa8/8])(a);
        }
    }
}
