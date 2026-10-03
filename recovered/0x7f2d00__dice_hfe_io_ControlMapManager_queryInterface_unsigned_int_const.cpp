// FUNCTION: BF2 0x7f2d00
namespace dice { namespace hfe {
void* f_7f2d00(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc199c, 0) ? self : 0;
}
} }
