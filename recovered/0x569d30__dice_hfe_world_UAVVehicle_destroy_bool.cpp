// FUNCTION: BF2 0x569d30
// BF2_FLAGS: -fno-tree-ter
#include <list>

extern "C" void* g_112ee38;   // playerManager
extern "C" void* g_10c5420;   // game
extern "C" void* g_112ee48;   // objectManager
extern "C" void* func_0x00407508(unsigned long size);
extern "C" void func_0x0042c170(void* self, int cat, unsigned int id, int b, void* p, unsigned int n, float f);

namespace dice { namespace hfe { namespace world {

extern void fn_589360(void* a, bool b);

typedef void* (*FnGetList)(void*, int);
typedef unsigned int (*FnGetId)(void*);
typedef void (*FnPostEv)(void*, unsigned int, void*);

void destroy_0x569d30(void* self, bool a) {
    void* pm = g_112ee38;
    std::list<void*>* l = (std::list<void*>*)(
        (FnGetList)(*(void***)pm)[0x90 / 8])(pm, *(int*)((char*)self + 0x244));
    for (std::list<void*>::iterator it = l->begin(); it != l->end(); ++it) {
        if (((FnGetId)(*(void***)(*it))[0xa8 / 8])(*it) == 0xff) continue;
        FnPostEv f = (FnPostEv)(*(void***)g_10c5420)[0x110 / 8];
        void* ev = func_0x00407508(0x58);
        func_0x0042c170(ev, 2, 0x52, 0, 0, 0, 0.0f);
        f(g_10c5420, ((FnGetId)(*(void***)(*it))[0xa8 / 8])(*it), ev);
    }
    ((void (*)(void*, void*))(*(void***)g_112ee48)[0x1a8 / 8])(g_112ee48, self);
    fn_589360(self, a);
}

} } }
