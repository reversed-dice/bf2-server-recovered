// FUNCTION: BF2 0x6750b0
namespace dice { namespace hfe {
void* f_6750b0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75fa0, 0) ? self : 0;
}
} }
