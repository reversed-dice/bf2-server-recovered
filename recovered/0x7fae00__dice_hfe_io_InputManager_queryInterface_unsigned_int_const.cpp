// FUNCTION: BF2 0x7fae00
namespace dice { namespace hfe {
void* f_7fae00(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc195c, 0) ? self : 0;
}
} }
