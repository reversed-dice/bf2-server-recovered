// FUNCTION: BF2 0x7f0170
namespace dice { namespace hfe {
void* f_7f0170(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc19a0, 0) ? self : 0;
}
} }
