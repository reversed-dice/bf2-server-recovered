// FUNCTION: BF2 0x8031e0
namespace dice { namespace hfe {
void* f_8031e0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bc19e0, 0) ? self : 0;
}
} }
