// FUNCTION: BF2 0x607510
namespace dice { namespace hfe {
void* f_607510(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfd0, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d010, 0) ? self : 0;
}
} }
