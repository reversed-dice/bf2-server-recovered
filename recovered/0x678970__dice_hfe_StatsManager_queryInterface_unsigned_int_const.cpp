// FUNCTION: BF2 0x678970
namespace dice { namespace hfe {
void* f_678970(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75fd0, 0) ? self : 0;
}
} }
