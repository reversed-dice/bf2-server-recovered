// FUNCTION: BF2 0x676070
namespace dice { namespace hfe {
void* f_676070(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75efc, 0) ? self : 0;
}
} }
