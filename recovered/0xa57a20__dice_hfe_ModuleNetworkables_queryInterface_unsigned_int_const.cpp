// FUNCTION: BF2 0xa57a20
namespace dice { namespace hfe {
void* f_a57a20(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00bb8fa0, 0))
        return __builtin_expect(id == *(unsigned int*)0x00bb8fa4, 0) ? self : 0;
    return self;
}
} }
