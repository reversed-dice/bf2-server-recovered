// FUNCTION: BF2 0x6ee410
namespace dice { namespace hfe {
void* f_6ee410(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c96588, 0) ? self : 0;
}
} }
