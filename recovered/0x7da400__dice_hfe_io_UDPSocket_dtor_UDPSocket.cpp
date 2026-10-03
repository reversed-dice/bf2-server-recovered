// FUNCTION: BF2 0x7da400
namespace dice { namespace hfe { namespace io {

extern "C" void dice_hfe_io_UDPSocket_close(void*);
void fn_0x7da400(void* self) {
    *(void**)self = (void*)0xbab550;
    dice_hfe_io_UDPSocket_close(self);
    *(void**)self = (void*)0xbab5d0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_UDPSocket_dtor_UDPSocket (0x7da400)
