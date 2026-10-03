// FUNCTION: BF2 0x6a6570
namespace dice { namespace hfe {
void* f_6a6570(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d69c, 0) ? self : 0;
}
} }
