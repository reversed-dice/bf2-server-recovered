// FUNCTION: BF2 0x5ff840
namespace dice { namespace hfe {
void* f_5ff840(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfbc, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d028, 0) ? self : 0;
}
} }
