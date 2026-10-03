// FUNCTION: BF2 0x5fc180
namespace dice { namespace hfe {
void* f_5fc180(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7d008, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7d028, 0) ? self : 0;
}
} }
