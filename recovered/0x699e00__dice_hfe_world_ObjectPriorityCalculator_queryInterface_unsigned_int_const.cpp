// FUNCTION: BF2 0x699e00
namespace dice { namespace hfe {
void* f_699e00(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d100, 0) ? self : 0;
}
} }
