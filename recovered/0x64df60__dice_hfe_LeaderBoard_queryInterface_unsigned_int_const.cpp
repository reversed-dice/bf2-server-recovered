// FUNCTION: BF2 0x64df60
namespace dice { namespace hfe {
void* f_64df60(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c75f2c, 0) ? self : 0;
}
} }
