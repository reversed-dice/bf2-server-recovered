// FUNCTION: BF2 0x5e3e80
namespace dice { namespace hfe { namespace world {
unsigned int fn_0x5e3e80(void* self, unsigned int v, bool a) {
    void* p = *(void**)((char*)self + 0x2b0);
    if (p)
        return ((unsigned int (*)(void*, unsigned int, bool))(*(void***)p)[0x29])(p, v, a);
    return v;
}
} } }
