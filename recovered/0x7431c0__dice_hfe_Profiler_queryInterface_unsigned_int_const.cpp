// FUNCTION: BF2 0x7431c0
namespace dice { namespace hfe {
void* f_7431c0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bb8f80, 0) ? self : 0;
}
} }
