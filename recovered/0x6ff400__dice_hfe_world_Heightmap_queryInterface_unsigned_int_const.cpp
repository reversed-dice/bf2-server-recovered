// FUNCTION: BF2 0x6ff400
namespace dice { namespace hfe {
void* f_6ff400(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c9657c, 0) ? self : 0;
}
} }
