// FUNCTION: BF2 0x620420
namespace dice { namespace hfe {
void* f_620420(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7cfa8, 1))
        return self;
    return __builtin_expect(id == *(unsigned int*)0x00c7cfac, 0) ? self : 0;
}
} }
