// FUNCTION: BF2 0x7a7ee0
namespace dice { namespace hfe { namespace io {

extern "C" void dice_hfe_io_ZWriter_close(void*);
extern "C" void _ZdlPv(void*);
extern "C" void _ZdaPv(void*);

void fn_0x7a7ee0(void* self) {
    dice_hfe_io_ZWriter_close(self);
    void* m = *(void**)self;
    _ZdlPv(m);
    void* arr = *(void**)((char*)self+0x18);
    if (arr) {
        _ZdaPv(arr);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_ZWriter_dtor_ZWriter (0x7a7ee0)
