// FUNCTION: BF2 0x62ba90
namespace dice { namespace hfe {
void* f_62ba90(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfe0, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d018, 0) ? self : 0;
}
} }
