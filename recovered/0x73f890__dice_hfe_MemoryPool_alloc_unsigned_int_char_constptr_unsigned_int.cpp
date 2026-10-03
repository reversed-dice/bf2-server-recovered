// FUNCTION: BF2 0x73f890
namespace dice { namespace hfe { namespace world {
typedef void* (*vfnalloc)(void*, unsigned long, const char*, unsigned);
void* fn_0x73f890(void* self, unsigned size, const char* file, unsigned line) {
    void** vt = *(void***)self;
    return ((vfnalloc)vt[0x20/8])(self, size, file, line);
}
} } }
// REVERSED_FUNCTION: dice_hfe_MemoryPool_alloc_unsigned_int_char_constptr_unsigned_int (0x73f890)
