// FUNCTION: BF2 0x6ea1f0
namespace dice { namespace hfe {
void* f_6ea1f0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c965a8, 0) ? self : 0;
}
} }
