// FUNCTION: BF2 0x7d4cf0
namespace dice { namespace hfe {
void* f_7d4cf0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc198c, 0) ? self : 0;
}
} }
