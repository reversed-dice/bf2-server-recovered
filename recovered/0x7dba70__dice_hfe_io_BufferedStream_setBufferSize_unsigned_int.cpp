// FUNCTION: BF2 0x7dba70
namespace dice { namespace hfe { namespace world {
void set_0x7dba70(void* p, unsigned int v) {
    *(unsigned int*)((char*)p + 0x38) = v;
    *(unsigned int*)((char*)p + 0x50) = v;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_setBufferSize_unsigned_int (0x7dba70)
