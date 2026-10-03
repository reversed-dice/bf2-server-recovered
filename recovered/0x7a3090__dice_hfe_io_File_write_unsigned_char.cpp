// FUNCTION: BF2 0x7a3090
namespace dice { namespace hfe { namespace io {

typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a3090(void* self, unsigned char val) {
    unsigned stack;
    *(unsigned char*)&stack = val;
    void* h = *(void**)self;
    void** vt = *(void***)h;
    int r = ((vfn2)vt[0x28/8])(h, &stack, 1);
    return r == 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_File_write_unsigned_char (0x7a3090)
