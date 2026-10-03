// FUNCTION: BF2 0x7da200
namespace dice { namespace hfe { namespace io {

extern "C" void dice_hfe_io_UDPSocket_close(void*);
extern "C" void _ZdlPv(void*);

void fn_0x7da200(void* self) {
    *(void**)self = (void*)0xbab550;
    dice_hfe_io_UDPSocket_close(self);
    *(void**)self = (void*)0xbab5d0;
    _ZdlPv(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_UDPSocket_dtor_UDPSocket (0x7da200)
