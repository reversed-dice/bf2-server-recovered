// FUNCTION: BF2 0x7e8240
namespace dice { namespace hfe { namespace io {
extern "C" int real_0x7a7f10(void* p, const void* buf, unsigned int n);
int fn_0x7e8240(void* self, const void* buf, unsigned int n) {
    void* p = *(void**)((char*)self+0x20);
    if (!p) return 0;
    return real_0x7a7f10(p, buf, n);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_ZStream_write_void_constptr_unsigned_int (0x7e8240)
