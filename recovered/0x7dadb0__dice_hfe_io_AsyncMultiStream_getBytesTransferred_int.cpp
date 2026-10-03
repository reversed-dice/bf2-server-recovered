// FUNCTION: BF2 0x7dadb0
namespace dice { namespace hfe { namespace io {

int fn_0x7dadb0(void* self, int idx) {
    void* base = *(void**)((char*)self+0x10);
    long i = idx;
    return *(int*)((char*)base + (i<<5) + 0x18);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStream_getBytesTransferred_int (0x7dadb0)
