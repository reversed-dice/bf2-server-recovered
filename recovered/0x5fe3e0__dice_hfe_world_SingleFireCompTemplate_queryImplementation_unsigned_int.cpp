// FUNCTION: BF2 0x5fe3e0
namespace dice { namespace hfe {
void* f_5fe3e0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d00c, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d028, 0) ? self : 0;
}
} }
