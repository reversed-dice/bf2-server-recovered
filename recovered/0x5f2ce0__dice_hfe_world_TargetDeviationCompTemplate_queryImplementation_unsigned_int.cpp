// FUNCTION: BF2 0x5f2ce0
namespace dice { namespace hfe {
void* f_5f2ce0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfc0, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d020, 0) ? self : 0;
}
} }
