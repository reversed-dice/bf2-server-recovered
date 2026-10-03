// FUNCTION: BF2 0x7d0670
namespace dice { namespace hfe { namespace io {
extern "C" float real_0x7da0d0(void* p);
float fn_0x7d0670(void* self) {
    void* p = *(void**)((char*)self+0x4c8);
    if (!p) return 0.0f;
    return real_0x7da0d0(p);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_getPacketDropRatio_const (0x7d0670)
