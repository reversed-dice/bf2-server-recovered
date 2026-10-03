// FUNCTION: BF2 0x59f070
namespace dice { namespace hfe {
void* f_59f070(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7ce8c, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
}
} }
