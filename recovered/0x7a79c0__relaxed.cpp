// FUNCTION: BF2 0x7a79c0
namespace dice { namespace hfe { namespace io {

extern "C" void dice_hfe_io_ZReader_close(void*);
extern "C" void _ZdlPv(void*);
extern "C" void _ZdaPv(void*);

void fn_0x7a79f0(void* self) {
    dice_hfe_io_ZReader_close(self);
    void* m = *(void**)((char*)self+8);
    _ZdlPv(m);
    void* arr = *(void**)((char*)self+0x20);
    if (arr) {
        _ZdaPv(arr);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_ZReader_dtor_ZReader (0x7a79f0)
