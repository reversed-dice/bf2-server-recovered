// FUNCTION: BF2 0x6dfc90
namespace dice { namespace hfe {
void* f_6dfc90(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c965a8, 0) ? self : 0;
}
} }
