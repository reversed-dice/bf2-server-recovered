// FUNCTION: BF2 0x5f4cb0
namespace dice { namespace hfe {
void* f_5f4cb0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cffc, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d028, 0) ? self : 0;
}
} }
