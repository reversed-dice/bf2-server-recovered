// FUNCTION: BF2 0x521a90
namespace dice { namespace hfe {
void* f_521a90(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d110, 0) ? self : 0;
}
} }
