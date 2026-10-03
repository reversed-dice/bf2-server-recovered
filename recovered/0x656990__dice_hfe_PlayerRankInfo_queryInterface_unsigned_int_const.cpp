// FUNCTION: BF2 0x656990
namespace dice { namespace hfe {
void* f_656990(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75ef4, 0) ? self : 0;
}
} }
