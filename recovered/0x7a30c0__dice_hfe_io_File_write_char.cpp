// FUNCTION: BF2 0x7a30c0
namespace dice { namespace hfe { namespace io {

typedef int (*vfn2)(void*,void*,int);
bool fn_0x7a30c0(void* self, char val) {
    unsigned stack;
    *(char*)&stack = val;
    void* h = *(void**)self;
    void** vt = *(void***)h;
    int r = ((vfn2)vt[0x28/8])(h, &stack, 1);
    return r == 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_File_write_char (0x7a30c0)
