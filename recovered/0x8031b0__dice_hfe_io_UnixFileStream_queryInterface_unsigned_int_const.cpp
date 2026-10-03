// FUNCTION: BF2 0x8031b0
namespace dice { namespace hfe {
void* f_8031b0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00bc1a14, 0))
        return __builtin_expect(id == *(unsigned int*)0x00bc1a10, 0) ? self : 0;
    return self;
}
} }
