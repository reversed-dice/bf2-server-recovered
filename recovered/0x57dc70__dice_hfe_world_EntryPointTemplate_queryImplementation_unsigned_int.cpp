// FUNCTION: BF2 0x57dc70
namespace dice { namespace hfe {
void* f_57dc70(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d08c, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d078, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
    return self;
}
} }
