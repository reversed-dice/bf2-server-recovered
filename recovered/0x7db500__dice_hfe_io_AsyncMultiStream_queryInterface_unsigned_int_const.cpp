// FUNCTION: BF2 0x7db500
namespace dice { namespace hfe {
void* f_7db500(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00bc1a08, 0))
        return __builtin_expect(id == *(unsigned int*)0x00bc1a04, 0) ? self : 0;
    return self;
}
} }
