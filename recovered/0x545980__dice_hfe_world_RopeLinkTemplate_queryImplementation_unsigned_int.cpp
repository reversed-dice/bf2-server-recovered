// FUNCTION: BF2 0x545980
namespace dice { namespace hfe {
void* f_545980(void* self, unsigned int id) {
    if (__builtin_expect(id == *(unsigned int*)0x00c7ceb8, 0))
        return self;
    if (__builtin_expect(id != *(unsigned int*)0x00c7d078, 0))
        return __builtin_expect(id == *(unsigned int*)0x00c7d0ac, 0) ? self : 0;
    return self;
}
} }
