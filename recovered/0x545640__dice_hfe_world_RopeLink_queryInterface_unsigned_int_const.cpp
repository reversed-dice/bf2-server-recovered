// FUNCTION: BF2 0x545640
namespace dice { namespace hfe {
void* f_545640(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d110, 0) ? self : 0;
}
} }
