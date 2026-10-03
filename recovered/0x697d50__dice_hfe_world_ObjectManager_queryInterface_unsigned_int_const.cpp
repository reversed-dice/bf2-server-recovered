// FUNCTION: BF2 0x697d50
namespace dice { namespace hfe {
void* f_697d50(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d140, 0) ? self : 0;
}
} }
