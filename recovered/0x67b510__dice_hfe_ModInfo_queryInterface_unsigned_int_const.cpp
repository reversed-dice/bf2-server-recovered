// FUNCTION: BF2 0x67b510
namespace dice { namespace hfe {
void* f_67b510(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75f1c, 0) ? self : 0;
}
} }
