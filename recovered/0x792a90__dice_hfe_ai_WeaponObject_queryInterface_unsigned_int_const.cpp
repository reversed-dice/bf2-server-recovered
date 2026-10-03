// FUNCTION: BF2 0x792a90
namespace dice { namespace hfe {
void* f_792a90(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00ca1980, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c7d104, 0) ? self : 0;
    return self;
}
} }
