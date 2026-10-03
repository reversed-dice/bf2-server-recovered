// FUNCTION: BF2 0x7d0690
namespace dice { namespace hfe { namespace io {
extern "C" void real_0x7da0f0(void* p, float v);
void fn_0x7d0690(void* self, float v) {
    void* p = *(void**)((char*)self+0x4c8);
    if (p) real_0x7da0f0(p, v);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_setPacketDropRatio_float (0x7d0690)
