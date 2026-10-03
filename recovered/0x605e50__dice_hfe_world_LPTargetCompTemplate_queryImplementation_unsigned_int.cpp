// FUNCTION: BF2 0x605e50
namespace dice { namespace hfe {
void* f_605e50(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfcc, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d010, 0) ? self : 0;
}
} }
