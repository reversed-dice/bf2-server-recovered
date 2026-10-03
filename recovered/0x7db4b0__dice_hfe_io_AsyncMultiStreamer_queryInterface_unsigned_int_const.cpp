// FUNCTION: BF2 0x7db4b0
namespace dice { namespace hfe {
void* f_7db4b0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc1a00, 0) ? self : 0;
}
} }
