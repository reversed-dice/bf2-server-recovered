// FUNCTION: BF2 0x6dcc10
namespace dice { namespace hfe {
void* f_6dcc10(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c96590, 0) ? self : 0;
}
} }
