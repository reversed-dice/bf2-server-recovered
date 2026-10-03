// FUNCTION: BF2 0x7a32f0
namespace dice { namespace hfe { namespace io {

typedef void (*vfn0)(void*);
void fn_0x7a32f0(void* self) {
    void* p = *(void**)self;
    if (p) {
        void** vt = *(void***)p;
        ((vfn0)vt[0x10/8])(p);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_File_dtor_File (0x7a32f0)
