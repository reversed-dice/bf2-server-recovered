// FUNCTION: BF2 0x7da490
namespace dice { namespace hfe { namespace io {
extern int fn_407ca8(int fd, unsigned char* buf, long n, int c);
extern void fn_7da420(void* self);
int cb_7da490(void* self, unsigned char* buf, int n) {
    int r = fn_407ca8(*(int*)((char*)self + 0x8), buf, n, 0);
    if (r != -1)
        return r;
    fn_7da420(self);
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_UDPSocket_receive_unsigned_charptr_int (0x7da490)
