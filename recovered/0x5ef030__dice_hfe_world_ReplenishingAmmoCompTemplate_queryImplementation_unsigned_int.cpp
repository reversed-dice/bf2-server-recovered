// FUNCTION: BF2 0x5ef030
namespace dice { namespace hfe {
void* f_5ef030(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfc4, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d024, 0) ? self : 0;
}
} }
