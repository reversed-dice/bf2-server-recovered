// FUNCTION: BF2 0x5a6680
namespace dice { namespace hfe {
void* f_5a6680(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7ce84, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
}
} }
