// FUNCTION: BF2 0x60fca0
namespace dice { namespace hfe {
void* f_60fca0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfe8, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d01c, 0) ? self : 0;
}
} }
