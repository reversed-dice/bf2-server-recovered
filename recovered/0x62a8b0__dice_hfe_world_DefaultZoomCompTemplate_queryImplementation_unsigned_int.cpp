// FUNCTION: BF2 0x62a8b0
namespace dice { namespace hfe {
void* f_62a8b0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfe4, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d018, 0) ? self : 0;
}
} }
