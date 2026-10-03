// FUNCTION: BF2 0x7a36a0
namespace dice { namespace hfe {
void* f_7a36a0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc19b8, 0) ? self : 0;
}
} }
