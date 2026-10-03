// FUNCTION: BF2 0x6a6040
namespace dice { namespace hfe {
void* f_6a6040(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d6a0, 0) ? self : 0;
}
} }
