// FUNCTION: BF2 0x73e0b0
namespace dice { namespace hfe {
void* f_73e0b0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bb8f88, 0) ? self : 0;
}
} }
