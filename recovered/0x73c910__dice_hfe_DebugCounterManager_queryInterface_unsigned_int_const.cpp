// FUNCTION: BF2 0x73c910
namespace dice { namespace hfe {
void* f_73c910(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bb8f68, 0) ? self : 0;
}
} }
