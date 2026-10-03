// FUNCTION: BF2 0x6de330
namespace dice { namespace hfe {
void* f_6de330(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c965c0, 0) ? self : 0;
}
} }
