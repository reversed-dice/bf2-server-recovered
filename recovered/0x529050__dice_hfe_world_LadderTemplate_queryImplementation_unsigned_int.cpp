// FUNCTION: BF2 0x529050
namespace dice { namespace hfe {
void* f_529050(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cef0, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d078, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
    return self;
}
} }
