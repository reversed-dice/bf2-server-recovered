// FUNCTION: BF2 0x6a4e20
namespace dice { namespace hfe {
void* f_6a4e20(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d6a4, 0) ? self : 0;
}
} }
