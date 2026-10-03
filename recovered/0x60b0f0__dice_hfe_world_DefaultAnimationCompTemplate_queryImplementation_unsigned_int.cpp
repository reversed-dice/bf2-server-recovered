// FUNCTION: BF2 0x60b0f0
namespace dice { namespace hfe {
void* f_60b0f0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfd8, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d014, 0) ? self : 0;
}
} }
