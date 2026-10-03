// FUNCTION: BF2 0x8508b0
namespace dice { namespace hfe { namespace io {
typedef void* (*vfn_28)(void*, int);
extern void* g_010b4040;
void* cb_8508b0(int device) {
    void* q = g_010b4040;
    if (q != 0)
        return (*(vfn_28*)((char*)*(void**)q + 0x28))(q, device);
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_getInputDevice_dice_hfe_io_IInputDeviceptr (0x8508b0)
