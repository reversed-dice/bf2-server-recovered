// FUNCTION: BF2 0x6a2df0
namespace dice { namespace hfe {
void* f_6a2df0(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d120, 0) ? self : 0;
}
} }
