// FUNCTION: BF2 0x7e7a50
namespace dice { namespace hfe {
void* f_7e7a50(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00bc1a14, 0))
        return __builtin_expect(id == *(unsigned int*)0x00bc1a10, 0) ? self : 0;
    return self;
}
} }
