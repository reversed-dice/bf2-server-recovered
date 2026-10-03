// FUNCTION: BF2 0x58dc70
namespace dice { namespace hfe {
void* f_58dc70(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d078, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
}
} }
