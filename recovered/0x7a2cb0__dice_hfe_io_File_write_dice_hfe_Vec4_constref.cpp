// FUNCTION: BF2 0x7a2cb0
namespace dice { namespace hfe { namespace io {
typedef int (*vfn_write)(void*, void*, int);
bool fn_0x7a2cb0(void* self, void* vec4ref) {
    void* impl = *(void**)self;
    void** vt = *(void***)impl;
    int r = ((vfn_write)vt[0x28/8])(impl, vec4ref, 0x10);
    return r != 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_File_write_dice_hfe_Vec4_constref (0x7a2cb0)
