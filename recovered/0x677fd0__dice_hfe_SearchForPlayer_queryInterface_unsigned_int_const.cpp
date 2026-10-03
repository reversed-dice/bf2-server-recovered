// FUNCTION: BF2 0x677fd0
namespace dice { namespace hfe {
void* f_677fd0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75f44, 0) ? self : 0;
}
} }
