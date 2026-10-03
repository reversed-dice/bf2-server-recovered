// FUNCTION: BF2 0x7e5900
namespace dice { namespace hfe { namespace io {
int fn_0x7e5900(void* self) {
    char* a = *(char**)((char*)self+0x18);
    long b = *(long*)(a+0x38);
    return (int)b - *(int*)((char*)self+0x28);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZipReadStream_getAvailableBytes (0x7e5900)
