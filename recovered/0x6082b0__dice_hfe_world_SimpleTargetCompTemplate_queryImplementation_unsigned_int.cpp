// FUNCTION: BF2 0x6082b0
namespace dice { namespace hfe {
void* f_6082b0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfc8, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d010, 0) ? self : 0;
}
} }
