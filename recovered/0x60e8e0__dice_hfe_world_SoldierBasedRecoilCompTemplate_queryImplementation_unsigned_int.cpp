// FUNCTION: BF2 0x60e8e0
namespace dice { namespace hfe {
void* f_60e8e0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfec, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d01c, 0) ? self : 0;
}
} }
