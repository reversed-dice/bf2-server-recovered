// FUNCTION: BF2 0x617f50
namespace dice { namespace hfe {
void* f_617f50(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d104, 0) ? self : 0;
}
} }
