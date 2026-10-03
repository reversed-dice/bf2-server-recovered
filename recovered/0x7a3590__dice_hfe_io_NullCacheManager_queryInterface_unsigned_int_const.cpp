// FUNCTION: BF2 0x7a3590
namespace dice { namespace hfe {
void* f_7a3590(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc19b4, 0) ? self : 0;
}
} }
