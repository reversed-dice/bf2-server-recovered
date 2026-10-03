// FUNCTION: BF2 0x7f3620
namespace dice { namespace hfe {
void* f_7f3620(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00bc19a8, 0))
        return __builtin_expect(id == *(unsigned int*)0x00bc1998, 0) ? self : 0;
    return self;
}
} }
