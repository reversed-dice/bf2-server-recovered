// FUNCTION: BF2 0x754400
namespace dice { namespace hfe {
void* f_754400(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00bb8fac, 1))
        return self;
    return __builtin_expect(id == 0x985beb, 0) ? self : 0;
}
} }
