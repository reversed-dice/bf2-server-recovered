// FUNCTION: BF2 0x5bae70
namespace dice { namespace hfe {
void* f_5bae70(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d104, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c75d10, 0) ? self : 0;
    return self;
}
} }
