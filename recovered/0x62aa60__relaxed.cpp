// FUNCTION: BF2 0x62aa60
namespace dice { namespace hfe { namespace io {

extern "C" void _ZdaPv(void*);
void fn_0x7e50e0(void* self) {
    *(void**)self = (void*)0xb7fdd0;
    *(void**)((char*)self+8) = (void*)0xb7fe58;
    void* p = *(void**)((char*)self+0x20);
    if (p) {
        _ZdaPv(p);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_MemStream_dtor_MemStream (0x7e50e0)
