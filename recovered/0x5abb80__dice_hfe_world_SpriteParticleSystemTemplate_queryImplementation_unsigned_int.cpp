// FUNCTION: BF2 0x5abb80
namespace dice { namespace hfe {
void* f_5abb80(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7ce90, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
}
} }
