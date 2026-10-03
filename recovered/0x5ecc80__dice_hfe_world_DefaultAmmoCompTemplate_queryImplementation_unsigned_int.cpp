// FUNCTION: BF2 0x5ecc80
namespace dice { namespace hfe {
void* f_5ecc80(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cff8, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d024, 0) ? self : 0;
}
} }
