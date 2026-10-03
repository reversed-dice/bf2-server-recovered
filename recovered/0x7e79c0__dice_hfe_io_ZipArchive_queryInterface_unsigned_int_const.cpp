// FUNCTION: BF2 0x7e79c0
namespace dice { namespace hfe {
void* f_7e79c0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00bc19e0, 0))
        return __builtin_expect(id == *(unsigned int*)0x00bc19dc, 0) ? self : 0;
    return self;
}
} }
