// FUNCTION: BF2 0x7c3920
namespace dice { namespace hfe {
void* f_7c3920(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc1958, 0) ? self : 0;
}
} }
