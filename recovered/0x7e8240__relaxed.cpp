// FUNCTION: BF2 0x7e8240
namespace dice { namespace hfe { namespace io {
extern "C" int real_0x7a7a70(void* p, void* buf, unsigned int n);
int fn_0x7e8220(void* self, void* buf, unsigned int n) {
    void* p = *(void**)((char*)self+0x20);
    if (!p) return 0;
    return real_0x7a7a70(p, buf, n);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZStream_read_voidptr_unsigned_int (0x7e8220)
