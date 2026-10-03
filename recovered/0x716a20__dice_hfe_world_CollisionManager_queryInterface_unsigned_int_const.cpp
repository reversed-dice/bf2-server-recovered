// FUNCTION: BF2 0x716a20
namespace dice { namespace hfe {
void* f_716a20(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c96560, 0) ? self : 0;
}
} }
