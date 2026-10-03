// FUNCTION: BF2 0x5a03a0
namespace dice { namespace hfe {
void* f_5a03a0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7ce80, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
}
} }
