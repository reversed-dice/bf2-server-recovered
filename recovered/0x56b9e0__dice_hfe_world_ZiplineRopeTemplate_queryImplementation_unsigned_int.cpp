// FUNCTION: BF2 0x56b9e0
namespace dice { namespace hfe {
void* f_56b9e0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cec0, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d078, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
    return self;
}
} }
