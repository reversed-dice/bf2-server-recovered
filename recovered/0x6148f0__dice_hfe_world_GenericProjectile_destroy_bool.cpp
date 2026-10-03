// FUNCTION: BF2 0x6148f0
namespace dice { namespace hfe { namespace world {
extern void fn_589360(void* a, bool b);
void destroy_0x6148f0(void* self, bool a) {
    ((void (*)(void*, bool))(*(void***)self)[0x62])(self, !a);
    void* p = *(void**)((char*)self + 0x390);
    if (p && p != *(void**)((char*)self + 0x70)) {
        ((void (*)(void*))(*(void***)p)[0x2])(p);
        *(void**)((char*)self + 0x390) = 0;
    }
    void* q = *(void**)((char*)self + 0x398);
    if (q && q != *(void**)((char*)self + 0x70)) {
        ((void (*)(void*))(*(void***)q)[0x2])(q);
        *(void**)((char*)self + 0x398) = 0;
    }
    fn_589360(self, a);
}
} } }
