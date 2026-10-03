// FUNCTION: BF2 0x73f8a0
namespace dice { namespace hfe { namespace world {
typedef void (*vfnfree)(void*, void*, const char*, unsigned);
void fn_0x73f8a0(void* self, void* p, const char* file, unsigned line) {
    void** vt = *(void***)self;
    ((vfnfree)vt[0x28/8])(self, p, file, line);
}
} } }
// REVERSED_FUNCTION: dice_hfe_MemoryPool_free_voidptr_char_constptr_unsigned_int (0x73f8a0)
