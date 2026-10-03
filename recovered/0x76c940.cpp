#include <stdlib.h>
typedef void* (*vfn1)(void*);

extern "C" void* getSoldier_76c940(void* self)
{
    void* p = *(void**)((char*)self + 0x8);
    void* r = ((vfn1)(*(void***)p)[0x148/8])(p);
    if (r) {
        void* p2 = *(void**)((char*)self + 0x8);
        void* r2 = ((vfn1)(*(void***)p2)[0x148/8])(p2);
        return *(void**)((char*)r2 + 0x68);
    }
    abort();
}
