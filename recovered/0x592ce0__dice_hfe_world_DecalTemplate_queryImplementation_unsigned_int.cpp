// FUNCTION: BF2 0x592ce0
namespace dice { namespace hfe {
void* f_592ce0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d05c, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
}
} }
