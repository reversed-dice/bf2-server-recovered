// FUNCTION: BF2 0x7018a0
namespace dice { namespace hfe {
void* f_7018a0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c96580, 0) ? self : 0;
}
} }
