// FUNCTION: BF2 0x5ec0a0
namespace dice { namespace hfe {
void* f_5ec0a0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d104, 0) ? self : 0;
}
} }
