// FUNCTION: BF2 0x7e4740
namespace dice { namespace hfe {
void* f_4fe760(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00bc19e0, 0))
        return __builtin_expect(id == *(unsigned int*)0x00bc19cc, 0) ? self : 0;
    return self;
}
} }
