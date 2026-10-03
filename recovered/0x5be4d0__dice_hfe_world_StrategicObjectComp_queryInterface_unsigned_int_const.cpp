// FUNCTION: BF2 0x5be4d0
namespace dice { namespace hfe {
void* f_5be4d0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d104, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c75ce0, 0) ? self : 0;
    return self;
}
} }
