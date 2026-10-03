// FUNCTION: BF2 0x5f0e60
namespace dice { namespace hfe {
void* f_5f0e60(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cff0, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d020, 0) ? self : 0;
}
} }
