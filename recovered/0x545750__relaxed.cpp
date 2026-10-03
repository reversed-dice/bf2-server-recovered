// FUNCTION: BF2 0x545750
namespace dice { namespace hfe {
void* f_4fe760(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7ceac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d078, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
    return self;
}
} }
