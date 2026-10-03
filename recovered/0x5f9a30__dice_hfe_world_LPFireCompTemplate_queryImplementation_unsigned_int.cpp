// FUNCTION: BF2 0x5f9a30
namespace dice { namespace hfe {
void* f_5f9a30(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d004, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d028, 0) ? self : 0;
}
} }
