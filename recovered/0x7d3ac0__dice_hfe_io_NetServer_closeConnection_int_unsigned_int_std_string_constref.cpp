// FUNCTION: BF2 0x7d3ac0
namespace dice { namespace hfe { namespace io {
extern void fn_74af10(void* p);
extern void fn_74af20(void* p);
extern int fn_7d2f70(void* self, int a, int b, void* c);
int cb_7d3ac0(void* self, int a, int b, void* c) {
    fn_74af10((char*)self + 0x578);
    int r = fn_7d2f70(self, a, b, c);
    fn_74af20((char*)self + 0x578);
    return r;
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_NetServer_closeConnection_int_unsigned_int_bool (0x7d3ac0)
