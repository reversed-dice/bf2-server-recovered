// FUNCTION: BF2 0x7c4670
namespace dice { namespace hfe {
void* f_7c4670(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc1960, 0) ? self : 0;
}
} }
