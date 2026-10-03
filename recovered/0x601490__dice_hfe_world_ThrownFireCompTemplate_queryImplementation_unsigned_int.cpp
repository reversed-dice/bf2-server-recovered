// FUNCTION: BF2 0x601490
namespace dice { namespace hfe {
void* f_601490(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d000, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d028, 0) ? self : 0;
}
} }
