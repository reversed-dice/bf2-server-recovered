// FUNCTION: BF2 0x779160
namespace dice { namespace hfe { namespace ai { namespace anonymous_namespace {
extern void* fn_771480(void* a);
unsigned char predicate_0x779160(void* self, void* a) {
    void* p = fn_771480(a);
    if (!p)
        return *(unsigned char*)((char*)self + 0x10);
    void* t = *(void**)((char*)self + 8);
    if (!t)
        return 1;
    return ((unsigned char (*)(void*, void*))(*(void***)t)[0])(t, p);
}
} } } }
