// FUNCTION: BF2 0x64f8d0
namespace dice { namespace hfe {
void* f_64f8d0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75f34, 0) ? self : 0;
}
} }
