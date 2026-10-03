// FUNCTION: BF2 0x751b90
namespace dice { namespace hfe {
void* f_751b90(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00bb8fa4, 0) ? self : 0;
}
} }
