// FUNCTION: BF2 0x5749a0
namespace dice { namespace hfe {
void* f_5749a0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d0a4, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d078, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
    return self;
}
} }
