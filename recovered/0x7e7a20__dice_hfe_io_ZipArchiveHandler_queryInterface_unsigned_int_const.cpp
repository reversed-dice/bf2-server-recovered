// FUNCTION: BF2 0x7e7a20
namespace dice { namespace hfe {
void* f_7e7a20(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc19d8, 0) ? self : 0;
}
} }
