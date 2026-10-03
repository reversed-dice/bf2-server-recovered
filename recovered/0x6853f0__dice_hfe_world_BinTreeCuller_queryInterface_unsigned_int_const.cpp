// FUNCTION: BF2 0x6853f0
namespace dice { namespace hfe {
void* f_6853f0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d14c, 0) ? self : 0;
}
} }
